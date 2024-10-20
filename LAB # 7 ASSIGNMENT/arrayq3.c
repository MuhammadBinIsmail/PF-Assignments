
// Q.3 : Write a C Program to find the minimum and maximum number in an array.

#include <stdio.h>
int main()
{
    int array_length;
    printf("Enter the length of the array: ");
    scanf("%d", & array_length);
    int array[array_length];
    
    printf("Enter %d elements: \n", array_length);
    for (int i = 0; i < array_length ; i++)
    {
        scanf("%d",& array[i]);
    }
    int maximum = array[0], minimum = array[0];
    for (int i = 0; i < array_length ; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
    }
    printf("The maximum element in the array is: %d\n", maximum);
    printf("The minimum element in the array is: %d", minimum);
    return 0;
}