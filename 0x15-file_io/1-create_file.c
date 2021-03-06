#include "holberton.h"

/**
 * create_file - entry point
 * @filename: Is the parameter to be checked
 * @text_content: Is the parameter to be checked
 *
 * Description: create a function that creates a file.
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t a;
	int k;

	if (filename == NULL)
		return (-1);

	k = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (k <= -1)
		return (-1);
	for (; text_content != NULL && *text_content != '\0'; text_content++)
	{
		a = write(k, text_content, 1);
		if (a < 1)
			return (-1);
	}
	if (close(k) == -1)
		return (-1);
	return (1);
}
