/*
Using the multiple digit program integrate the number 
if it is a prime or composite number.
*/
#include<stdio.h>
int main()
{
    int number, userinput, count = 0;
    float digitcal;
    printf("\nEnter a multiple digit number: ");
    scanf("%d", & userinput);
    number = userinput;
    for(; number > 0;)
    {   
        number = number / 10;
        count = count + 1;
        
    }
    if (count > 1)
        {
            printf("\n%d is a Multiple digit number", userinput);
        }
    else
        {
            printf("\n%d is not Multiple digit number", userinput);
            
        }
    int primecheck = 1; 
    for (int i = 2; i <= userinput / 2; i++)
    /* We start with i = 2 b/c need to check whether
     the number has any divisors other than 1 and itelf.

     Any factor of number must be less than or equal to number/2 
     except number itself.
    */
    {
        if (userinput % i == 0)
        {
            primecheck = 0;
            break;    
        }
    }
    if (primecheck == 1)
    {
        printf("\n%d is a Prime number.", userinput);
    }
    else
    {
        printf("\n%d is a COMPOSITE number.", userinput); 
    }
    return 0;
}  