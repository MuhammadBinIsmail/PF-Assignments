
// SECTION # 2 LOGICAL OPERATORS

// Q.1 Write a program that checks if a number is divisible by both 3 and 5 using logical operators.

#include <stdio.h>
int main()
{
	int number;
	printf("\nEnter a positive integer: ");
	scanf("%d", & number);
	if (number > 0)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			printf("\nNumber enterted is divisible by both 3 and 5.\n");
		}
		else
		{
			printf("\nNumber enterted is not divisible by both 3 and 5.\n");
		}
	}
	else
	{
		printf("\nInvalid Input\n");
	}
	return 0;
}