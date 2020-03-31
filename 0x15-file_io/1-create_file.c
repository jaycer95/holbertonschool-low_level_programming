#include "holberton.h"
/**
 * create_file - creates a text file and prints it to standard output.
 * @filename : file name
 * @text_content: content of file
 * Return: integer.
 */
int create_file(const char *filename, char *text_content)
{
	int rtrn;
	int fd;
	int size;

	if (filename == NULL)
		return (0);
	fd = open(filename,  O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (0);
	if (text_content == NULL)
		return (1);
	while (text_content[size])
		size++;
	rtrn = write(fd, tex_content, size);
	if (print == -1)
		return (-1);
	close(fd);
	return (rtrn);
}
