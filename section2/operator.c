#include <stdio.h>

int main()
{
    // int a = 2, b = 5, c;
    // c = a + b;

    // printf("result is %d\n", ++a);
    // printf("result is %d\n", a);


    unsigned int a = 60;  // 0011 1100
    unsigned int b = 13;  // 0000 1101
    int result = 0;
    result = a & b ;

    //0000 1100
     printf("resutl %d \n", result);

    return 0;
}