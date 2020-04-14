#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "THIS IS A VERY LONG STRING";
    char newWord[] = "manoj";

    printf("string length function => %d \n", strlen(string));
    //---------------------------------------------
    strcpy(string, "THIS IS NEW STRING IN TEXT");
    printf("NEW STRING => %s \n", string);
    //--------------------------------------------
    strncpy(string, "THIS IS AGAIN NEW STRING", 17);
    printf("NEW OF NEW STRING => %s \n", string);
    //-----------------------------------------
    printf("This is concat string => %s\n", strcat(string, newWord));
    //------------------------------------------
    printf("This is used for compare function %d \n", strcmp("apples", "apples"));

    return 0;
}