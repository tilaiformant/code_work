/*    ch2_7.c    */
#include <stdio.h>

int main()
{   
   int s, a, b, c;

   a = 5;
   b = 4;
   c = 3;
   s = a * b % c;
   printf("s = a * b %% c = %d\n", s);

    getchar( );// 等待使用者輸入一個字元（按任意鍵）
    return 0;
}
