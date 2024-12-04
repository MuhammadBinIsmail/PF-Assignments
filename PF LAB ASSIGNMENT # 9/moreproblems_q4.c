/*
Write a C program with a user-defined function calculate to perform basic arithmetic operations
such as addition, subtraction, multiplication, and division. The program should take two
numbers and an operation choice as input, and then use the function to perform the operation.
*/

#include <stdio.h>
double arithmetic(double num1, double num2, char operation)
{
    switch (operation)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0) // Avoid division by zero
            return num1 / num2;
        else
        {
            printf("\nDivision by zero not allowed.\n");
            return 0;
        }
    default:
        printf("\nInvalid operation input.");
        return 0;
    }
}
int main()
{
    double number1, number2;
    char choice;
    printf("\nEnter number 1: ");
    scanf("%lf", &number1);
    printf("\nEnter number 2: ");
    scanf("%lf", &number2);
    printf("\nEnter operation(+,-,*,/): ");
    scanf(" %c", &choice);
    double answer = arithmetic(number1, number2, choice);
    printf("\nThe result is: %.2lf", answer);
    return 0;
}