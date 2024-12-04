/*
Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
For example: "madam", "racecar", "level", "radar".
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char array[5][20];
    printf("\nEnter 5 words to check palindrome: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("word %d : ", i + 1);
        scanf("%s", array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        int length = strlen(array[i]);
        int palindrome = 1;
        for (int j = 0; j < length / 2; j++)
        {
            if (array[i][j] != array[i][length - j - 1])
            {
                
                palindrome = 0;
                break;
            }
        }
        if (palindrome == 1)
        {
            printf("The word %s is a palindrome.\n", array[i]);
        }
        else
        {
            printf("The word %s is not a palindrome.\n", array[i]);
        }
    }
    return 0;
}