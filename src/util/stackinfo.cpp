/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <pthread.h>
#include <memory.h>
#include <iostream>
#include "util/exception.h"

#define LEAN_MIN_STACK_SPACE 128*1024  // 128 Kb

namespace lean {
#ifdef LEAN_WINDOWS
size_t get_stack_size() {
    return LEAN_WIN_STACK_SIZE
}
#else
size_t get_stack_size() {
    pthread_attr_t attr;
    memset (&attr, 0, sizeof(attr));
    pthread_getattr_np (pthread_self(), &attr);
    void * ptr;
    size_t result;
    pthread_attr_getstack (&attr, &ptr, &result);
    return result;
}
#endif

static thread_local size_t g_stack_size;
static thread_local size_t g_stack_base;

void save_stack_info() {
    g_stack_size = get_stack_size();
    char x;
    g_stack_base = reinterpret_cast<size_t>(&x);
}

size_t get_used_stack_size() {
    char y;
    size_t curr_stack = reinterpret_cast<size_t>(&y);
    return g_stack_base - curr_stack;
}

size_t get_available_stack_size() {
    size_t sz = get_used_stack_size();
    if (sz > g_stack_size)
        return 0;
    else
        return g_stack_size - sz;
}

void check_stack() {
    if (get_used_stack_size() + LEAN_MIN_STACK_SPACE > g_stack_size)
        throw stack_space_exception();
}
}
