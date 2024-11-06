
/*Write a C program to multiply two matrices 
of size 3x3 and display the result matrix.*/

#include <stdio.h>
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    printf("\nEnter the values for 3 by 3 matrix 1.\n");
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter value [%d][%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter the values for 3 by 3 matrix 2.\n");
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter value [%d][%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    int number1 = 0;
    int number2 = 0, result = 0;
    int resultmatrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultmatrix[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //number1 = matrix1[i][j];
            for (int k = 0; k < 3; k++)
            {
                resultmatrix[i][j] = resultmatrix[i][j] + (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }
    printf("\nThe resultant 3 by 3 matrix after multiplication is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d    ", resultmatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}