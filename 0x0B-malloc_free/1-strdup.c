#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as parameter
 * @str: string to copy
 * Return: returns NULL if str is NULL, else it returns a pointer
 * to duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		length++;
	duplicate = malloc((length + 1) * sizeof(char));
	/*adding 1 to make space for NULL terminator*/

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0';
	/*adding NULL terminator to end of new string*/
	return (duplicate);
}
