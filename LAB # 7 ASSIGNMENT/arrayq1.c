
// Q.1 : Write a C Program that takes an user input array and prints the sum of its elements.

#include<stdio.h>
int main()
{
    int length_array, sum = 0;
    printf("Enter the length of the array: ");
    scanf("%d", & length_array);
    int array[length_array];
    printf("Enter %d elements:\n", length_array);
    for (int i = 0; i < length_array; i++)
    {
        scanf("%d", & array[i]);
        sum = sum + array[i];
    }

    printf("Sum of Array Elements is : %d", sum);
    return 0;
}
