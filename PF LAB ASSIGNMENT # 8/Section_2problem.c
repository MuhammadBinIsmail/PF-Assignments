//Write a program to take a 2D array input from the user and display its transpose.

#include <stdio.h>
int main()
{
    int matrix[2][2];
    int transpose[2][2];
    
    printf("\nEnter the values for 2 by 2 matrix to find its transpose.\n");
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Enter value [%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe input matrix is:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the matrix is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}