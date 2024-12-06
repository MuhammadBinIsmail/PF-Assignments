//Write a recursive function that takes an array and its size as input and prints all the
//elements.

#include <stdio.h>
void recur_array(int array[], int array_size)
{
    if (array_size == 0)
    {
        return;
    }
    printf("%d ", array[0]);
    recur_array(array + 1, array_size - 1);
}
int main()
{
    int no_elements;
    printf("Enter the size of the array: ");
    scanf("%d", &no_elements);

    int elementarray[no_elements];
    printf("Enter %d elements of the array: ", no_elements);
    for (int i = 0; i < no_elements; i++) {
        scanf("%d", &elementarray[i]);
    }
    printf("Array elements: ");
    recur_array(elementarray, no_elements);
    return 0;
}
