/*    ch2_9.c    */
#include <stdio.h>

int main()
{   
   int a, b;
   float s;
   a = 3;
   b = 2;
   s = a / b;
   printf("s = a / b = %3.2f\n", s);
   a = 3;
   b = 2;
   s = (float) a / (float) b;
   printf("s = (float) a / (float) b = %3.2f\n", s);

    getchar( );// 等待使用者輸入一個字元（按任意鍵）
    return 0;
}
