
// MORE PROBLEMS :'D

// Q.1 Write a program to find the greatest of three numbers using nested if-else statements.

#include<stdio.h>
int main()
{
	int number_1, number_2, number_3;
	printf("\nEnter number 1: ");
	scanf("%d", & number_1);
	printf("\nEnter number 2: ");
	scanf("%d", & number_2);
	printf("\nEnter number 3: ");
	scanf("%d", & number_3);
	if (number_1 > number_2 && number_1 > number_3)
	{
		printf("\n%d is greater.\n", number_1);
	}	
	else if (number_2 > number_1 && number_2 > number_3)
	{
		printf("\n%d is greater.\n", number_2);
	}
	else
	{
		printf("\n%d is greater.\n", number_3);
	}
	return 0;
}