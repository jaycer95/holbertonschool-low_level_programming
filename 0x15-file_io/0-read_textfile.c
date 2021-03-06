#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename : file name
 * @letters: legth of file
 * Return: pointer to function.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t print;
	int fd;
	int size;
	char *copy;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	copy = malloc(letters);
	size = read(fd, copy, letters);
	if (size == -1)
		return (0);
	print = write(STDOUT_FILENO, copy, size);
	if (print == -1)
		return (0);
	free(copy);
	close(fd);
	return (print);
}
