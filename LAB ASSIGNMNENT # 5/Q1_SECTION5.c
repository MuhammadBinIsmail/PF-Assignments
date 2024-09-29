
// SECTION # 5 MODULS OPERATOR

//Q.1 Write a program that checks if a year is a leap year using the modulus operator.

#include <stdio.h>
int main()
{
	int year;
	printf("\nEnter the year: ");
	scanf("%d", & year);
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	{
		printf("%d is a leap year", year);
	}
	else
	{
		printf("%d is not a leap year", year);
	}
	return 0;
}