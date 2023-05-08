#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: the string
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to NULL terminated string to write to the file
 * Return: -1 if the function fails
 *         else return 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_wrote;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	bytes_wrote = write(fd, text_content, _strlen(text_content));
	if (bytes_wrote == -1 || bytes_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
