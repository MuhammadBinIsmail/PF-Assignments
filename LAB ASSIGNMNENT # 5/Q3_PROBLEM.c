
// MORE PROBLEMS :'D

// Q.3 Write a program that uses bitwise operators to perform encryption and decryption of a character.

#include <stdio.h>
int main()
{
	char inputcharacter, encryptedcharacter, decryptedcharacter;
	int encryptionkey;
	printf("\nEnter character for encryption: ");
	scanf("%c", & inputcharacter);
	printf("\nEnter the encryption key: ");
	scanf("%d", & encryptionkey);
	// Here I am using bitwise XOR operator for both encryption and decryption.
	encryptedcharacter = inputcharacter ^ encryptionkey;
	decryptedcharacter = encryptedcharacter ^ encryptionkey;
	printf("\nCharacter after encryption is : %c\n", encryptedcharacter);
	printf("\nCharacter after decryption is : %c\n", decryptedcharacter);
	return 0;
}