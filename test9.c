/*    ch2_6.c    */
#include <stdio.h>

int main()
{   
   int s, a, b;

   a = 10;
   b = 15;
   s = a + b;
   printf("s = a + b = %d\n", s);
   a = 1.8;
   b = 2.3;
   s = a - b;
   printf("s = a - b = %d\n", s);
   a = 5;
   b = 6;
   s = a * b;
   printf("s = a * b = %d\n", s);
   a = 2.4;
   b = 1.2;
   s = a / b;
   printf("s = a / b = %d\n", s);
   a = 5;
   b = 4;
   s = a % b;
   printf("s = a %% b = %d\n", s);

    getchar( );// 等待使用者輸入一個字元（按任意鍵）
    return 0;
}
