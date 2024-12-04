//Create a function that reverses a given string and returns the reversed string. Use this function
//in the main program to display the reversed string entered by the user.

#include <stdio.h>
#include <string.h>
void reversestring(char strinput[], char reversed[])
{
    int length = strlen(strinput);
    for (int i = 0; i < length; i++)
    {
        reversed[i] = strinput[length - i - 1];
    }
    reversed[length] = '\0'; 
}
int main()
{
    char stringinput[50];
    char reversed[50];
    printf("Enter the string you want to reverse: ");
    scanf("%s", stringinput);
    reversestring(stringinput, reversed);
    printf("The reverse string is: %s", reversed);
    return 0;
}