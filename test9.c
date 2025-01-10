/*    ch2_16.c    */
#include <stdio.h>

int main()
{   
    double pi;
    pi = 4 * (1 - 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9);
    printf("pi = %f \n", pi);

    getchar( );// 等待使用者輸入一個字元（按任意鍵）
    return 0;
}
