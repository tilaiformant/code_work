/*    ch2_11.c    */
#include <stdio.h>

int main()
{   
   float a, b, s1;
   int s2;

   a = 4.6;
   b = 2.1;
   s1 = a / b;
   printf("s1 = a / b = %3.2f\n", s1);
   s2 = (int) a / (int) b;
   printf("s2 = (int) a / (int) b = %d\n", s2);

    getchar( );// 等待使用者輸入一個字元（按任意鍵）
    return 0;
}
