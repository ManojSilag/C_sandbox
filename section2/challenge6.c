#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userNumber;
    int randomnumber;
    srand(time(NULL));
    randomnumber = rand() % 20;
    printf("%d\n", randomnumber);

    for (int i = 1; i <= 5; i++)
    {
        printf("Please Enter the Number :");
        scanf("%d", &userNumber);
        if (userNumber < 0 || userNumber > 20)
        {
            printf("Please Enter the number between 0 and 20\n23");
        }
        else
        {
            if (randomnumber == userNumber)
            {
                printf("Hurray you guessed it wright\n");
                break;
            }
            else
            {
                if (randomnumber >= userNumber)
                {
                    printf("sorry wrong  (random number is greater) guess try again\n");
                }
                else
                {
                    printf("sorry wrong  (random number is smaller) guess try again\n");
                }

                // i++;
            }
        }
    }

    return 0;
}