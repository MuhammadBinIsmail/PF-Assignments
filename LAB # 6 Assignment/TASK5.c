/*
Using for-loop statement print the following series:
65536, 32768, 10922, 2730, 546, 91, 13, 1, 0 
*/
#include <stdio.h>
int main()
{
    int number = 65536;
    printf("%d", number);
    for (int i = 2; i <= 9; i++)
    {
        number = number / i;
        printf(",%d", number);
    }
    return 0;
}