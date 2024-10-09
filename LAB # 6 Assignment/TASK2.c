/*
Write a program to check whether a given number is a multiple digit number or not.

1. Example: 123 is a multiple digit number.
2. 6 is not a multiple digit number.

*/
#include<stdio.h>
int main()
{
    int number, count = 0;
    float digitcal;
    printf("\nEnter a multiple digit number: ");
    scanf("%d", & number);
    for(; number > 0;)
    {   
        number = number / 10;
        count = count + 1;
        
    }
    if (count > 1)
        {
            printf("\nMultiple digit number");
        }
    else
        {
            printf("\nNot a muultiple digit number");
        }
    return 0;
}