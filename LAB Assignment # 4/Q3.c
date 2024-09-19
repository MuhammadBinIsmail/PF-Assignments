#include <stdio.h>
int main()
{
	char user_input;
	printf("Enter a character: ");
	scanf("%c", &user_input);
	if (user_input >= 97 && user_input <= 122)
		printf("You entered a small alphabet");
	else if  (user_input >= 65 && user_input <= 90)
		printf("You entered a capital alphabet");
	else if  (user_input >= 48 && user_input <= 57)
		printf("You entered a number");
	else if  (user_input >= 33 && user_input <= 47 || user_input >= 58 && user_input <= 64 || user_input >= 91 && user_input <= 96)
		printf("You entered a special character");
	else
		printf("Invalid input");
}
