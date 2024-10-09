/*
Which loop system would be better for user input. Justify your answer by creating a program
that takes a value and adds it to a variable and prints it repeatedly until the user enters a zero
value.

ANSWER : In my opinion While loop would be better for this question because 
it allows continuous input until a particular condition (userinput == 0) is met.
*/
#include <stdio.h>
int main()
{
    int number, var;
    while (number != 0)
    {
        printf("\nEnter 0 to exit: ");
        scanf("%d", & number);
        var = number;
        printf("\nNumber = %d\n", var);
    }
    printf("\nProgram Exit\n");
    return 0;
}