//Write a recursive function that calculates the sum of digits of a number.
// For example, if the input is 123, the output should be 6.

#include <stdio.h>
int sumofdigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 10) + sumofdigits(num / 10);
    }
}
int main()
{
    int number;
    printf("\nEnter a number to find the sum of its digits: ");
    scanf("%d", &number);
    int result = sumofdigits(number);
    printf("\nThe sum of digits of the given number is: %d", result);
    return 0;
}