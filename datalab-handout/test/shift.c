#include <stdio.h>

int main() {
    int x = 0x87654321;           // 有符号，最高位是 1，是负数
    unsigned int ux = 0x87654321; // 无符号，就是个大正数

    printf("有符号 x 右移 4 位: 0x%08X\n", x >> 4);
    printf("无符号 ux 右移 4 位: 0x%010X\n", ux >> 4);   //0表示

    return 0;
}