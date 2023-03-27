#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

/**
 * main - generates random password
 * Return: 0
 */

int main(void) {
	char password[PASSWORD_LENGTH];
	int i;

	srand(time(NULL));  // Seed the random number generator with the current time

	for (i = 0; i < PASSWORD_LENGTH - 1; i++)
	{
		password[i] = rand() % 94 + 33; // Generate a random printable ASCII character
	}
	password[i] = '\0'; // Terminate the string with null character

	printf("%s\n", password); // Print the generated password

	return 0;
}
