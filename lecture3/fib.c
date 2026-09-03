#include<stdio.h>

int fib_dw(int n)
{
    int i=0;
    int val=0;
    int nval=1;

    do{
        int t=val +nval;
        val=nval;
        nval = t;

        i++;
    }while(i < n);
    return val;
}

int main() {
    int result = fib_dw(10);  // 计算第10个斐波那契数
    printf("fib(10) = %d\n", result);  // 输出: fib(10) = 55
    return 0;
}