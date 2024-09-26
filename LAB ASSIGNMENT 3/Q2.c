#include <stdio.h>
int main()
{
	int number_1, number_2, swap = 0;
	printf("\nEnter number_1: ");
	scanf("%d", &number_1);
	printf("Enter number_2: ");
	scanf("%d", &number_2);
	swap = number_1;
	number_1 = number_2;
	number_2 = swap;
	printf("\nNumber 1 is %d amd Number 2 is %d", number_1, number_2);
	return 0;

}

