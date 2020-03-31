#include "holberton.h"
/**
 *
 *
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int rtrn;
	int fd;
	int size;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	while (text_content[size])
		size++;
	rtrn = write(fd, text_content, size);
	if (rtrn == -1)
		return (-1);
	close(fd);
	return (1);
}
