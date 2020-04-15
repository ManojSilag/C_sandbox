#include <stdio.h>
#include <string.h>

int main()
{
    // Searching string

    // strchr
    char str[] = " this is a sq tring";
    char ch = 'q';
    char *pChar = NULL;
    pChar = strchr(str, ch);
    printf("%s", pChar);

    //strstr
    //  char str1[] = "Every dog has a day";
    // char ch1 = 'dog';
    // char *pChar1 = NULL;
    // pChar1 = strstr(str, ch);
    // printf("%s", pChar1);

    //Tokeninzing string

    //analyzing string

    return 0;
}