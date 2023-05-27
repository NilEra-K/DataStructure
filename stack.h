#ifndef _STACK_H
#define _STACK_H
// 包含的公共头文件
#include <stdio.h>
#include <stdlib.h>
// 声明栈的属性的结构体
typedef struct stack{
    int* arr;
    int cap;
    int top;
}stack_t;

// 声明栈的操作函数
extern void stack_init(stack_t* stack, int cap);    // 初始化


#endif  // _STACK_H