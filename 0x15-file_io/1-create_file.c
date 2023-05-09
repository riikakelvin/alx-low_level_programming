#include "main.h"
/**
 * create_file - creates a file
 * @filename: a file pointer variable
 * @text_content: a string pointer variable
 * Return: if successful test, 1, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, actual_lett_count, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	actual_lett_count = write(file_d, text_content, len);

	if (file_d == -1 || actual_lett_count == -1)
		return (-1);

	close(file_d);

	return (1);
}
