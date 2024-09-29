
// SECTION # 1 NESTED IF-ELSE STATEMENTS

// Q.1 Write a program that categorizes a person's age into different life stages: Child, Teenager, Adult, and Senior, using nested if-else statements.

#include<stdio.h>
int main()
{
	int age;
	printf("\nEnter your age as a whole number: ");
	scanf("%d", & age);
	if (age >= 0)
	{
		if (age <= 12)
		{
			printf("\nCHILD\n");
		}
		else if (age > 12 && age <= 19)
		{
			printf("\nTEENAGER\n");
		}
		else if (age > 19 && age <= 60)
		{
			printf("\nADULT\n");
		}
		else
		{
			printf("\nSENIOR\n");
		}
	}
	else
	{
		printf("\nEnter the age in the correct format\n");
	}
	return 0;
}