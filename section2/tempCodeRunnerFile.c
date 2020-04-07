#include <stdio.h>

int main()
{
    int userNumber;
    printf("Please Enter the Number :");
    scanf("%d", &userNumber);

    if (userNumber < 0 || userNumber > 20)
    {
        printf("Please Enter the number between 0 and 20");
    }

    return 0;
}