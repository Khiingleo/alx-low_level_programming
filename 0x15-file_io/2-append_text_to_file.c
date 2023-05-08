#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add at the end of the file
 * Return: -1 of failure
 *         1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_wrote, len = 0;

	if (filename == NULL)
		return (-1);

	if (textcontent != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	bytes_wrote = write(fd, text_content, len);
	if (bytes_wrote == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
