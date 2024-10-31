#include <stdio.h>
int main()
{
    int upper_rows;
    printf("Enter the number of rows for the upper half diamond: ");
    scanf("%d", & upper_rows);
    //int no_of_rows = (upper_rows + upper_rows) + 2;  
    for (int i = 0; i < upper_rows; i++)
    {
        // This loop prints the upper half spaces of the diamond
        
        for (int j = 0; j < (upper_rows - i - 1); j++)
        {
            printf(" ");
        }
        
        // This loop prints the upper half stars of the diamond
        
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    for (int i = upper_rows - 2; i >= 0; i--)
    {
        // This loop prints the bottom half spaces of the diamond
        
        for (int j = 0; j < upper_rows - i - 1; j++)
        {
            printf(" ");
        }
        
        // This loop prints the bottom half stars of the diamond
        
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}