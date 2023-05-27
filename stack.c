// stack.c
#include "stack.h"

void stack_init(stack_t* stack, int cap){
    // 给栈分配内存
    stack->arr = malloc(sizeof(int)*cap);
    stack->cap = cap;
    stack->top = 0;
}

void stack_deinit(stack_t* stack){
    free(stack->arr);   // 释放内存
    stack->cap = 0;
    stack->top = 0;
}

