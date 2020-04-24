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
    struct date yerstday;


    today.month = 9;
    today.day = 25;
    today.year = 2019;

    struct date tomaroww = {4, 3, 1996};
    yerstday = (struct date){31,31,3012};

    printf("%i/%i/%i\n", yerstday.month, yerstday.day, yerstday.year);
    printf("%i/%i/%i\n", tomaroww.month, tomaroww.day, tomaroww.year);
    printf("%i/%i/%i\n", today.month, today.day, today.year);

    return 0;
}