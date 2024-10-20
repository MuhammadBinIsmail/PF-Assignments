
// Q.2 : Write a program in C to read n number of values in an array and display it in reverse order.

#include <stdio.h>
int main()
{
    int array_length, element = 0;
    printf("Enter the length of the array: ");
    scanf("%d", & array_length);
    int array[array_length];
    printf("Enter %d values: \n", array_length);
    for (int i = 0; i < array_length; i++)
    {
        scanf("%d", & array[i]);
        //printf("%d", & array[array_length - 1]);
    }
    for (int i = array_length -1 ; i >= 0; i--)
    {
        
        printf("%d ", array[i]);
    }
    return 0;
}