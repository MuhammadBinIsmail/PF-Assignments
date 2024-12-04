//Write a program that initializes a 2D character array with a list of words. Then, take a
//word as input from the user and check if it exists in the array. Display "Found" if it’s there,
//otherwise display "Not Found".

#include <stdio.h>
#include <string.h>
int main()
{
    int found = 0;
    char listofwords[4][10] = {"hello", "ali", "ahmed", "toyota"};
    char userinput[10];
    printf("\nEnter a word to check its existance: ");
    scanf("%s", userinput);
    for (int i = 0; i < 4 ; i++)
    {
        if ((strcmp(userinput,listofwords[i]) == 0) && found == 0)
        {
            printf("\nThe word you have entered matched.");
            found = 1;
            break; 
        }
    }
    if (found == 0)
    {
        printf("\nThe word you have entered not matched.");
    }
    return 0;
}
