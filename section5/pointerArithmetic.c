#include <stdio.h>

int main()
{
    int a = 12;
    int b = 15;
    const int *pointer = &a;

    printf("value %d\n", *pointer);
    printf(" adress %p\n", pointer);

    pointer = &b;
    printf("value %d\n", *pointer);
    printf(" adress %p\n", pointer);

    return 0;
}