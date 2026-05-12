#include <stdio.h>
#include <stdint.h>

struct Test {
    uint8_t  a;
    uint32_t b;
    uint16_t c;
};

int main(void) {
  //打印Test，通过sizeof运算符获取，并通过int强制转换为int类型
    printf("sizeof(Test) = %d\n", (int)sizeof(struct Test));
//返回0
    return 0;
}
