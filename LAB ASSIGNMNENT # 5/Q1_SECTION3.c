
//SECTION # 3 CONDITIONAL (TERNARY) OPERATORS

// Q.1 Write a program using a ternary operator to find the maximum of two numbers.
#include <stdio.h>
int main()
{
	int number_1,number_2;
	printf("\nEnter number 1: ");
	scanf("%d", & number_1);
	printf("\nEnter number 2: ");
	scanf("%d", & number_2);
	number_1 > number_2 ? printf("\nNumber 1 is greater.\n") : (number_1 < number_2 ? printf("\nNumber 2 is greater.\n") : printf("\nBoth numbers are equal.\n"));
	return 0;
}
