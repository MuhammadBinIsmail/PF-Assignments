//Write a function that checks if a given number is even or odd.

#include <stdio.h>
int evenoddcheck(int a);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    evenoddcheck(number);
}
int evenoddcheck(int a)
{
    if (a % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
    return 0;
}