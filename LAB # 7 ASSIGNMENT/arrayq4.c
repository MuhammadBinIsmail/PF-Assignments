
// Q.4 : Given an array arr[] of size N which contains elements from 0 to N-1,
// you need to find all the elements occurring more than once in the given array.

#include <stdio.h>
int main()
{
    int array_length;
    printf("Enter the length of the array: ");
    scanf("%d", & array_length);
    int maximumvalue = 0;
    //int occurrance[maximumvalue];
    int array[array_length];
    printf("Enter %d elements of the array: \n", array_length);
    for (int i = 0; i < array_length; i++)
    {
        scanf("%d", & array[i]);
    }
    
    for (int i = 0; i < array_length; i++) 
    {
        if (array[i] > maximumvalue)    //Finding the maximum number in the array to sett the occurrance
        {
            maximumvalue = array[i];
        }
    }
    int occurrance[maximumvalue + 1];
    for (int i = 0; i <= maximumvalue; i++)
    {
        occurrance[i] = 0;  //Initializing occurance array with zeros to denote zero occurance at the start.
    }
    int count = 0;
    for (int i = 0; i < array_length; i++)
    {
        occurrance[array[i]]++;     //Counting the occurance of each element within the array
    }
    for (int i = 0; i <= maximumvalue; i++)
    {
        if (occurrance[i] > 1)
        {
            printf("\n%d in array occur more than once.", i);
            count = 1;
        }
    }
    if (count == 0)
    {
        printf("None");
    }
    //printf("\n\n%d", count);
    //printf("\n\nProgram Ends");
    return 0;
}