//Write a C function that takes two numbers as input and returns their product.

#include <stdio.h>
int product(int a, int b);
int main()
{
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    int result = product(num1,num2);
    printf("The product of num1 and num2 is: %d", result);
    return 0;
}
int product(int a, int b)
{
    return a * b;
}