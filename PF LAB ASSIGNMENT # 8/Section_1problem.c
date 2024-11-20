/*Write a C program to generate the following pattern:
1
1 2
1 2 3
1 2 3 4
*/

#include <stdio.h>
int main()
{
    int rows = 4;
    
    for (int i = 0; i < rows; i++)
    {
        int pattern = 0;
        for(int j = 0; j <= i; j++)
        {
            pattern = pattern + 1;
            printf("%d ", pattern);
        }
        
        printf("\n");
    }
    
    return 0;
}