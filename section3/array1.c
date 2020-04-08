#include<stdio.h>

int main()
{
    int array[5] = {[1]=12, [3]=51};

    // int array[5] = {0,1,2,3};
    // array[4]= 6;
    // printf("Enter the values\n");

    // for(int i = 0; i < 5 ; i++)
    // {
    //     printf("%u>",i+1);
    //     scanf("%d", &array[i]);
    // }
        
        printf("%d\n", array[0]);
        printf("%d\n", array[1]);
        printf("%d\n", array[2]);
        printf("%d\n", array[3]);
        printf("%d\n", array[4]);

    return 0;
}
