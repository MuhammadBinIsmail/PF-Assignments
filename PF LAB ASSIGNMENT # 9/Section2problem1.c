#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char deststring[50];
    char sourcestring[50];
    printf("Enter string 1: ");
    gets(deststring);
    printf("Enter string 2: ");
    gets(sourcestring);
    printf("\nEnter the number of characters you want to concatenate: ");
    scanf("%d", &n);
    strncat(deststring, sourcestring, n);
    printf("%s", deststring);
    return 0;
}
