/*Write a C program that generates a sequence of prime numbers 
within a given range using nested loops.*/

#include <stdio.h>
int main()
{
    int range_1, range_2;
    printf("Enter the starting range number: ");
    scanf("%d", & range_1); 
    printf("Enter the ending range number: ");
    scanf("%d", & range_2);
    
    for (int i = range_1; i < range_2; i++)
    {
        if (i < 2)      //Numbers less than 2 are not prime
        {
            continue;
        }
        int primechecking = 1;
        for(int j = 2; j < i; j++)
        {
            if ((i % j) == 0)
            {
                primechecking = 0;
                break;
            }
            
        }
        if (primechecking == 1)
        {
            printf("%d\n", i);
        }
        
    }
    return 0;
}