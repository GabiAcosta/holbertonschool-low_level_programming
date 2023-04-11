#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to read
 * @text_content: text to write in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i])
		i++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	write(fd, text_content, i);
	return (1);
}
