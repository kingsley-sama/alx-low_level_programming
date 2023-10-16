#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function to generate a random character from a given character set
char getRandomCharacter(const char* charSet, int charSetLength) {
	int randomIndex = rand() % charSetLength;
	return charSet[randomIndex];
}

int main() {
	// Seed the random number generator with the current time
	srand(time(NULL));

	// Define the character set from which the password will be generated
	const char charSet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
	int charSetLength = strlen(charSet);

	// Define the length of the password
	int passwordLength = 12; // You can change this as needed

	// Generate and print the random password
	printf("Generated Password: ");
	for (int i = 0; i < passwordLength; i++) {
		char randomChar = getRandomCharacter(charSet, charSetLength);
		putchar(randomChar);
	}
	printf("\n");

	return 0;
}
