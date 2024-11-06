
/*Write a C program to find the saddle point(s) in a given 3x3 matrix. A saddle point is an element
that is the smallest in its row and the largest in its column.*/

#include <stdio.h>
int main()
{
    int array[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element [%d][%d] : ", i , j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("Display of 3 by 3 matrix : \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    int rows[3], columns[3];
    int i, j;

    // Here, I insert the first index values of rows and columns. 
    for (i = 0; i < 3; i++) 
    {
        rows[i] = array[i][0];
        columns[i] = array[0][i];
    }

    // Now comparing the zero index values of rows and columns with all teh other index vales.
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) 
        {
            if (array[i][j] < rows[i]) 
            {
                rows[i] = array[i][j];
            }
            if (array[i][j] > columns[j]) 
            {
                columns[j] = array[i][j];
            }
        }
    }
    printf("The Saddle Point is : ");
    int saddlepoint = 0;
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            if (array[i][j] == rows[i] && array[i][j] == columns[j]) 
            {
                printf("(%d, %d) = %d ", i, j, array[i][j]);
                saddlepoint = 1;
            }
        }
    }
    if (saddlepoint == 0) 
    {
        printf("No saddle point found.");
    }
    printf("\n");

    return 0;
}
