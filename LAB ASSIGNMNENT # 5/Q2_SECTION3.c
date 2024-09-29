
// SECTION # 3 TERNARY OPERATOR

// Q.2 Use the ternary operator to check if a number is positive, negative, or zero.

#include <stdio.h>
int main()
{
	int number;
	printf("\nEnter a whole number: ");
	scanf("%d", & number);
	number > 0 ? printf("\nNumber is positive"):(number < 0 ? printf("\nNumber is negative"):printf("\nNumber is zero"));
	return 0;
}