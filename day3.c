#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint32_t a = 10;
    uint32_t b = 20;

    // 1. 指向常量的指针：不能改指向的内容
    const uint32_t *p1 = &a;
    // *p1 = 30;        // ← 错误！编译报错
    p1 = &b;            // ← 可以，换指向没问题

    // 2. 常指针：不能改指向，但能改内容
    uint32_t * const p2 = &a;
    *p2 = 30;           // ← 可以，改内容
    // p2 = &b;         // ← 错误！编译报错

    // 3. 指向常量的常指针：啥都不能改
    const uint32_t * const p3 = &a;
    // *p3 = 30;        // ← 错误！
    // p3 = &b;         // ← 错误！

    printf("a = %d\n", a);
    printf("p1 points to value: %d\n", *p1);
    printf("*p2 = %d\n", *p2);
    printf("*p3 = %d\n", *p3);

    return 0;
}
