/*    ch2_5.c    */
#include <stdio.h>

int main()
{   
   int i;
   char c;
   c = 'a';
   i = c + 1;
   printf("c = %c\n", c);
   printf("c = %d\n", c);
   printf("i = %d\n", i);

    getchar( );// 等待使用者輸入一個字元（按任意鍵）
    return 0;
}
