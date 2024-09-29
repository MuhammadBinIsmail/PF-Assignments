
// SECTION # 1 NESTED IF-ELSE STATEMENTS

// Q.2 Create a program that determines if a number is positive, negative, or zero, and if it’s positive, checks if it’s an even or odd number.

#include <stdio.h>
int main()
{
	int number;
	printf("\nEnter a whole number: ");
	scanf("%d", & number);
	if (number > 0)
	{
		if (number % 2 == 0)
		{
			printf("\nThe number entered is positive and even.\n");
		}
		else
		{
			printf("\nThe number entered is positive and odd.\n");
		}
	}
	else if (number < 0)
	{
		printf("\nThe number entered is negative.\n");
	}
	else
	{
		printf("\nThe number entered is zero.\n");
	}
	return 0;
}