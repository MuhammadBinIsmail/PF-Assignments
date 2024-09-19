#include <stdio.h>
int main()
{
int input;

printf("Enter the number which is a multiple of 3: ");
scanf("%d", &input);

if (input % 3 == 0)
    {
        printf("The number is a multiple of 3");

    }
    
else
    {
        printf("The number is not a multiple of 3");
    }
}   