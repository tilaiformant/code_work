#include <stdio.h>

int main()
{
    int i1, i2 ,i3;
    long j1, j2, j3;
    i1 = 2147483647;
    i2 = i1 + 1;
    i3 = i2 - 1;
    printf("i1 = %d\n", i1);
    printf("i2 = %d\n", i2);
    printf("i3 = %d\n", i3);
    getchar();// 等待使用者輸入一個字元（按任意鍵）
}
