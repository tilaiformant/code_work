/*    ch2_3.c    */
#include <stdio.h>

int main()
{   
    printf("型態 = 大小 (bytes) \n");
    printf("short = %d\n",sizeof(short));
    printf("int = %d\n", sizeof(int));
    printf("long = %d\n", sizeof(long));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n", sizeof(double));
    printf("char =%d\n", sizeof(char));
    
    
    getchar( );// 等待使用者輸入一個字元（按任意鍵）
    return 0;
}
