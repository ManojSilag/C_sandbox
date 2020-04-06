#include <stdio.h>

int main()
{

    int a, b;

    printf("Enter the Number a \n");
    scanf("%i", &a);

    printf("Enter the Number b \n");
    scanf("%i", &b);

    // remainder = num;
    // if (remainder == 0)
    // {
    //     printf("Even \n");
    // }
    // else if (remainder == 1)
    // {
    //     printf("Odd\n");
    // }
    // else
    // {
    //     printf("wholeeee");
    // }

    switch (a + b)
    {
    case (12):
        printf("12 was printed");
        break;
    case (13):
            printf("13 was printed"); 
            break;
    case (14):
            printf("14 was printed"); 
            break;
    case (15):
            printf("15 was printed");
            break;
    default:
            printf("I dont know"); 
            break;
    }

    return 0;
}