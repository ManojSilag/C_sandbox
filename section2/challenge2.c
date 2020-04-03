#include<stdio.h>

int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX , YAHOO, EBAY, MICROSOFT};
    enum company first = XEROX, second = GOOGLE, third = EBAY;

    printf("%d\n",first);
    printf("%d\n",second);
    printf("%d\n",third);
    return 0;
}