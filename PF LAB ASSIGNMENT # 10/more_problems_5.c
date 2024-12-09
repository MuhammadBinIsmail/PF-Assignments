/*
Write a recursive function bubbleSort that takes an array and its size. It performs the
bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
they are in the wrong order.
*/

#include <stdio.h>
void bubblesort(int array[], int size)
{
    int swap = 0;
    if (size == 1)
    return;
    // for (int pass = 0; pass < size - 1; pass++)
    // {
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap = array[i];
                array[i] = array[i + 1];
                array[i + 1] = swap;
            }
            // else if (array[i] > array[i - 1])
            // {
            //     continue;
            // }
        }
        bubblesort(array, size - 1);
    //}
    return;
}
int main()
{
    int size_of_array;
    printf("Enter the size of the array: ");
    scanf("%d", &size_of_array);
    int array[size_of_array];
    printf("\nEnter %d elements of the array.\n", size_of_array);
    for (int i = 0; i < size_of_array; i++)
    {
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", &array[i]);
    }
    bubblesort(array, size_of_array);
    for (int i = 0; i < size_of_array; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}