#include<stdio.h>

int add();

int main()
{
    int a = 2,b =5 , c;
     c = add(a,b);
    printf(" result1 %d\n", c);

    return 0;
}

int add( int g, int b)
{    
    int result;
    result = g +  b;
    return result;
}