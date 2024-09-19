#include <stdio.h>
int main()
{
	char operator_input;
	int number1, number2, addition, subtraction, multiplication;
	float division;
	again:
	printf("Enter number 1: ");
	scanf("%d", &number1);
	printf("\nEnter number 2: ");
	scanf("%d", &number2);
	printf("\nEnter the operator from the following + - * / : ");
	scanf(" %c", &operator_input);
	switch(operator_input)
	{
		case '+':
			addition = number1 + number2;
			printf("\nThe addition of two numbers is: %d", addition);
			break;		
		case '-':
			subtraction = number1 - number2;
			printf("\nThe subtraction of two numbers is: %d", subtraction);
			break;
		case '*':
			multiplication = number1 * number2;
			printf("\nThe multiplication of two numbers is: %d", multiplication);
			break;
		case '/':
			division = number1 / number2;
			printf("\nThe division of two numbers is: %.2f", division);
			break;
		default:
			printf("\nEnter the correct operator: \n\n");
			goto again;
			break;			
	}
	return 0;
}
