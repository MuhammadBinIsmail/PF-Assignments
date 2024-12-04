/*
Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values.
*/

#include <stdio.h>
void swapintegers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp; 
    return;
}
int main()
{
    int number1, number2;
    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);
    swapintegers(&number1, &number2);
    printf("The value number 1 after swapping is : %d and the value of number 2 is : %d", number1, number2);
    return 0;
}