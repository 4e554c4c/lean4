#!/usr/bin/env bash
if [ $# -ne 3 -a $# -ne 2 ]; then
    echo "Usage: test_single.sh [lean-executable-path] [file] [yes/no]?"
    exit 1
fi
ulimit -s 8192
source test_flags.sh
LEAN=$1
BIN_DIR=../../bin
INCLUDE_DIR=../../src
export LEAN_PATH=../../library:.
if [ $# -ne 3 ]; then
    INTERACTIVE=no
else
    INTERACTIVE=$3
fi
ff=$2

# Hack for converting a list of libraries such as `/usr/lib/gmp.so;dl` into valid liker parameters.
LINKER_LIBS=""
for lib in ${LIBS//;/ }; do
  if [[ $lib == *".so" || $lib == *".dll" || $lib == *".dylib" ]]; then
    LINKER_LIBS="$LINKER_LIBS $lib"
  else
    LINKER_LIBS="$LINKER_LIBS -l$lib"
  fi
done

if [[ "$OSTYPE" == "msys" ]]; then
    # Windows running MSYS2
    # Replace /c/ with c:, and / with \\
    ff=$(echo $ff  | sed 's|^/\([a-z]\)/|\1:/|' | sed 's|/|\\\\|g')
fi

DIFF=diff
if diff --color --help >/dev/null 2>&1; then
  DIFF="diff --color";
fi

$LEAN --cpp="$ff".cpp "$ff"
if [ $? -ne 0 ]; then
    echo "Failed to compile $ff into C++ file"
    exit 1
fi

$CXX -o "$ff.out" -I $INCLUDE_DIR $CXX_FLAGS $ff.cpp $BIN_DIR/libleanstatic.a $LINKER_FLAGS $LINKER_LIBS
if [ $? -ne 0 ]; then
    echo "Failed to compile C++ file $ff.cpp"
    exit 1
fi

"./$ff.out" > "$ff.produced.out"
if [ $? -ne 0 ]; then
   echo "Failed to execute $ff.out"
   exit 1
fi

if test -f "$ff.expected.out"; then
    if $DIFF -u --ignore-all-space -I "executing external script" "$ff.expected.out" "$ff.produced.out"; then
        echo "-- checked"
        exit 0
    else
        echo "ERROR: file $ff.produced.out does not match $ff.expected.out"
        if [ $INTERACTIVE == "yes" ]; then
            meld "$ff.produced.out" "$ff.expected.out"
            if diff -I "executing external script" "$ff.expected.out" "$ff.produced.out"; then
                echo "-- mismatch was fixed"
            fi
        fi
        exit 1
    fi
else
    echo "ERROR: file $ff.expected.out does not exist"
    if [ $INTERACTIVE == "yes" ]; then
        read -p "copy $ff.produced.out (y/n)? "
        if [ $REPLY == "y" ]; then
            cp -- "$ff.produced.out" "$ff.expected.out"
            echo "-- copied $ff.produced.out --> $ff.expected.out"
        fi
    fi
    exit 1
fi
