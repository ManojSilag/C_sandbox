#include <stdio.h>

int main()
{
    int a[] = {12, 23};
    int *ptr = &a;

    printf("%d\n", a[1]);
    printf("%d\n", *ptr+1);

    return 0;
}