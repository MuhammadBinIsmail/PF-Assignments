// Create a function that returns the maximum and minimum element in an integer array. Use this
// function in the main program to find the maximum and minimum from an array entered by the
// user.
#include <stdio.h>
void arraymaxmin(int userarray[], int length, int maxmin[])
{
    maxmin[0] = userarray[0];
    maxmin[1] = userarray[1];
    for (int i = 0; i < length; i++)
    {
        if (userarray[i] > maxmin[0])
        {
            maxmin[0] = userarray[i];
        }
        if (userarray[i] < maxmin[1])
        {
            maxmin[1] = userarray[i];
            
        }
    }
}
int main()
{
    printf("\nProvide numbers to insert in an array to find max and min number.");
    int numbers;
    printf("\nHow many numbers you want to enter: ");
    scanf("%d", &numbers);
    if (numbers <= 0)
    {
        printf("\nInvalid array size.");
        return 1;
    }
    int array[numbers];
    for (int i = 0; i < numbers; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &array[i]);
    }
    int maxmin[2];
    arraymaxmin(array, numbers, maxmin);
    printf("\nThe maximum element is: %d", maxmin[0]);
    printf("\nThe minimum element is: %d", maxmin[1]);
    return 0;
}