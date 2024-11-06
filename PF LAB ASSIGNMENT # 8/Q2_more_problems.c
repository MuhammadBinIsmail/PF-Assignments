
/*Generate a pattern of odd numbers in decreasing order 
starting from a user-specified number using nested loops.*/

#include <stdio.h>
int main()
{
    int user_input = 0;
    printf("Enter the number to print a pattern of odd numbers in decreasing order: ");
    scanf("%d", &user_input);
    int odd_number = user_input;
    if (user_input % 2 == 0)
    {
        odd_number = user_input - 1;
    }
    for(int i = 0; i < user_input; i++)
    {
        for (int j = 0; j < i; j++) 
        {
            if (odd_number <= 0)
            {
                break;
            }
            printf("%d ", odd_number);
            odd_number -= 2; 
        }
        if (odd_number <= 0)
        {
            break;
        }
        printf("\n");
        
    }
    return 0;
}
