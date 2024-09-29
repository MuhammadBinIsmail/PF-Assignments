
// SECTION # 4 BITWISE OPERATOR

// Q.1 Write a program to swap two numbers using bitwise XOR.

#include <stdio.h>
int main() 
{
	int number_1, number_2;
	printf("\nEnter number 1: ");
	scanf("%d", & number_1);
	printf("\nEnter number 2: ");
	scanf("%d", & number_2);
	number_1 = number_1 ^ number_2;
	number_2 = number_1 ^ number_2;
	number_1 = number_1 ^ number_2;
	printf("\nResults after swapping number_1 = %d, number_2 = %d \n", number_1, number_2);
	return 0;
}