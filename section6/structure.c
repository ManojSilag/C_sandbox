#include <stdio.h>

int main()
{

    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today;
    struct date yesterday;


    today.month = 9;
    today.day = 25;
    today.year = 2019;

    struct date tomorrow = {4, 3, 1996};
    yesterday = (struct date){31,31,3012};

    printf("%i/%i/%i\n", yesterday.month, yesterday.day, yesterday.year);
    printf("%i/%i/%i\n", tomorrow.month, tomorrow.day, tomorrow.year);
    printf("%i/%i/%i\n", today.month, today.day, today.year);

     struct date myDates[3] = { {12,12,1232}, {12,32,1890}};

    //  struct date myDates[3] = { [2]= {1,2,3211 } };
     
    printf("%i/%i/%i\n", myDates[0].month, myDates[0].day, myDates[0].year);
    printf("%i/%i/%i\n", myDates[1].month, myDates[1].day, myDates[1].year);
    printf("%i/%i/%i\n", myDates[2].month, myDates[2].day, myDates[2].year);

    return 0;
}