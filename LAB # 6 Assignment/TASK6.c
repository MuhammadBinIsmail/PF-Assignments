/*
Create a C program to calculate the following series using loop statements
1, 2, 4, 8, 32, 256, 8192, 2097152
 */

#include <stdio.h>
int main()
{
    int firstnumber = 1, secondnumber = 2, calculate = 0;
    int nextnumber, firstpower = 1, secondpower = 2, nextpower = 0;
    int i = 3;
    nextnumber = secondnumber;
    printf("\n%d,%d,%d", firstnumber, secondnumber, secondnumber);   //Prnting the first three numbers of series
    do{
        nextnumber = nextnumber * (secondpower);    //Calculating next nuymber using previous number and applying power 
        nextpower = firstpower * secondpower;       //Calculation of power required for next term using previous two powers 
        calculate = calculate + nextnumber;
        printf(",%d", nextnumber);
        firstpower = secondpower;                   //switching of values
        secondpower = nextpower;
        i = i + 1;
    }while (i <= 8);
    calculate = calculate + firstnumber + (2 *secondnumber);     //Calculating the sum of the series
    printf("\n\nCalculation of the series is: %d", calculate);
    printf("\n\n");
    return 0;
}
