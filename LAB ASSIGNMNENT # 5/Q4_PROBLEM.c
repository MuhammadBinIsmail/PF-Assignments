
// Q.4 Develop a program that uses logical operators to determine if a person is eligible for a loan
// based on age, income, and credit score.

#include <stdio.h>
int main()
{  // Credit Score ranges from 300 to 850.
	int age, income, creditscore;
	printf("\nEnter your age in whole number format: ");
	scanf("%d", & age);
	printf("\nEnter your income in whole number format: ");
	scanf("%d", & income);
	printf("\nEnter your credit score between 300 to 850: ");
	scanf("%d", & creditscore);
	if (age >= 18 && age <= 60)
	{
		if (income >= 50000)
		{
			if (creditscore >= 300 && creditscore <= 850)
			{
				printf("\nYou are elligible for the loan.");			
			}
			else
			{
				printf("\nLow Credit Score to get loan.");
			}
		}
		else
		{
			printf("\nInsufficient Income to get loan.");
		}
	}
	else
	{
		printf("\nNot elligible for Loan.");
	}
	return 0;
}