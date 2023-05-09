#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a textfile and prints to STD output
 * @filename: the textfile to be read
 * @letters: numberof letters to be read & printed out
 * Return: 0 if filename is NUll, otherwise
 * return the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t file_d;
	ssize_t actual_count;
	ssize_t t;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	t = read(file_d, buff, letters);
	actual_count = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(file_d);
	return (actual_count);
}
