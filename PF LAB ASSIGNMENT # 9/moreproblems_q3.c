//Implement a function that checks if a given integer is a prime number. Use this function in the
//main program to check if numbers entered by the user are prime.

#include <stdio.h>
void checkingprime(int n)
{
    int prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n < 2 || n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("\nThe number you have entered is a prime number");
    }
    else
    {
        printf("\nThe number you have entered is not a prime number");
    }
}
int main()
{
    int number;
    printf("\nEnter number to check whether it is prime: ");
    scanf("%d", &number);
    checkingprime(number);
    return 0;
}