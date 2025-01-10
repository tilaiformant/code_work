/*    ch2_12_1.c    */
#include <stdio.h>

int main()
{   
    int size;
    float foot = 7.5;   /* 腳的尺寸 */

    size = (int) foot + 1;
    printf("你的腳的尺寸是     : %2.1f\n", foot);
    printf("你購買的鞋子尺寸是 : %d\n", size); 

    getchar( );// 等待使用者輸入一個字元（按任意鍵）
    return 0;
}
