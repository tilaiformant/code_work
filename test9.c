/*    ch2_16.c    */
#include <stdio.h>

int main()
{   
    float r = 20.0;
    float h = 30.0;
    float pi = 3.1415926;
    float area = pi * r * r * h;
    printf("圓柱體積是 %f 立方公分\n", area);


    getchar();// 等待使用者輸入一個字元（按任意鍵）
    return 0;
}
