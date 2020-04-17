#include <stdio.h>

int main()
{
    int a = 12;
    int value;
    int *pointer = &a;
    value = *pointer;

    printf("%d\n", value);
    printf("%p\n", &a);
    printf("%p\n", pointer);
    printf(" My Own address %p\n", (void*) &pointer);
    printf("%d bytes\n", sizeof(pointer));

    return 0;
}