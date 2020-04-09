#include<stdio.h>
int main()
{
 
    for (int i = 0; i < 100; i++)
    {
        if(i % 2 != 0){
            for(int j = i-1; j<i; j+=2)
            {
            printf("I may be primee %d\n",j);
            }
        }
    }
    return 0;
}