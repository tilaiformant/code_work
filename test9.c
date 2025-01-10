/*    ch2_12_1.c    */
#include <stdio.h>

int main()
{   
   int i, s;

   i = 5;
   s = ++i + 3;
   printf("s = ++i + 3 = %d\n", s);
   i = 5;
   s = 3 + i++;
   printf("s = 3 + i++ = %d\n", s);
    getchar( );// 等待使用者輸入一個字元（按任意鍵）
    return 0;
}
