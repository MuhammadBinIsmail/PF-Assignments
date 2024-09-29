
// SECTION # 2 LOGICAL OPERATORS

// Q.2 Create a program that checks if a person is eligible to vote based on their age and citizenship status.

#include <stdio.h>
int main()
{
	int age;
	char citizenship;
	printf("\nEnter your age as a whole number: ");
	scanf("%d", & age);
	printf("\nEnter your country's first letter: ");
	scanf(" %c", & citizenship);
	if (age >= 18 && (citizenship == 'P' || citizenship == 'p'))
	{
		printf("\nYou are eligible to vote.\n");
	}
	else
	{
		printf("\nYou are not eligible to vote.\n");
	}
}