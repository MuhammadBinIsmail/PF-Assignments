#include<stdio.h>
int main()
{
	int principle,time_period;
	float Rate_of_Interest,Simple_Interest;
	printf("\nYou have to enter the principle that must be between 100 Rs To 1,000,000 Rs.");
	printf("\nYou have to enter the Rate of interest that must be between 5 To 10 percent.");
	printf("\nYou have to enter the Time Period that must be between 1 To 10 Years.");
	printf("\n\nEnter the principle: ");
	scanf("%d", &principle);
	printf("\nEnter the Rate of Interest: ");
	scanf("%f", & Rate_of_Interest);
	printf("\nEnter the Time Period: ");
	scanf("%d", &time_period);
	Simple_Interest = (principle * Rate_of_Interest * time_period) / 100;
	printf("Simple Interest is : Rs. %.2f\n", Simple_Interest);
}