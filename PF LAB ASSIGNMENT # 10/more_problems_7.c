/*
Create a C program that defines a constant for the conversion factor of meters to
kilometers. Use a static variable in a function to count how many times the function is
called.
*/

#include <stdio.h>
#define metertokilometers 0.001
double convertmetertokilometers(double meters)
{
    static int count = 0;
    count = count + 1;
    printf("Function called %d times.\n", count);
    return meters * metertokilometers;
}

int main()
{
    double metersinput;
    while (1)
    {
        printf("\nEnter distance in meters or enter negative value to exit: ");
        scanf("%lf", &metersinput);

        if (metersinput < 0)
        {
            printf("Enter a valid distance.\n");
            break;
        }
        double kilometers = convertmetertokilometers(metersinput);
        printf("%.2f meters equals to %.2f kilometers.\n", metersinput, kilometers);
    }
    return 0;
}
