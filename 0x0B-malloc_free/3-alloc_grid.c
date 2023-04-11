#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2dimensional array of integers
 * @width: width of 2dimensional array
 * @height: height of 2dimensional array
 * Return: return NULL if height or width = 0
 *         return NULL if function fails
 *         else return pointer to 2dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
