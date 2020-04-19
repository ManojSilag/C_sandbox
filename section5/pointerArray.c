#include<stdio.h>

void swap(int *a)
{
  
  *a =99;
   printf("From swappppp %d\n", *a);

}

int main()
{
    int a[2] = {12,14};
    int *p;
    int c =65;
    p = a;

   printf("varialbe address %p\n", &c);
   printf("varialbe value %d\n", c);
  
    swap(&c);
   printf("varialbe address => %p\n", &c);
   printf("varialbe value => %d\n", c);
 
    printf("value inside pointer %p\n", p);
    printf("pointer addressing to value %d\n", *p);

    printf("value inside pointer %p\n", a);
    printf("pointer addressing to value %d\n", *a);

    p = p+1;
    printf("value inside pointer %p\n", p);
    printf("pointer addressing to value %d\n", *p);

    return 0;
}