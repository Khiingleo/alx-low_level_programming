#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatonates all arguments of the program
 * @ac: number of arguments
 * @av: array of pointers to the program
 * Return: NULL if ac == 0 or av == NULL
 *         else return a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int total = 0, i, pos = 0;
	char *arg, *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			total++;
			arg++;
		}
		total++; /*for new line character*/
	}

	str = (char *) malloc((total + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			str[pos++] = *arg++;
		}
		str[pos++] = '\n';
	}
	str[pos] = '\0';

	return (str);
}
