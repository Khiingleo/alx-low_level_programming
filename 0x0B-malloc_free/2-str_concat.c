#include "main.h"
#include <stdlib.h>


char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0, len2 = 0;

	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';
	return (concat);

}
