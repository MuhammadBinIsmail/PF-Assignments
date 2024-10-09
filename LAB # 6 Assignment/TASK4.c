/*
Write a program to print the following series: 1, 2, 3, 5, 8, 13.
*/
#include <stdio.h>
int main()
{
    int firstnumber = 1, secondnumber = 2;
    int nextnumber;
    int i = 3;
    printf("%d,%d", firstnumber, secondnumber);
    do{
        nextnumber = firstnumber + secondnumber;
        printf(",%d", nextnumber);
        firstnumber = secondnumber;
        secondnumber = nextnumber;
        i = i + 1;
    }while (i <= 6);
    return 0;
}
/*printf("%d,%d", firstnumber, secondnumber);
    for (int i = 3; i <= 6; i++)
    {
        
        nextnumber = firstnumber + secondnumber;
        printf(",%d", nextnumber);
        firstnumber = secondnumber;
        secondnumber = nextnumber;
    }
    */