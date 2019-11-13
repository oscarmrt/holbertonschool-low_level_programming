#include "holberton.h"

/**
 * append_text_to_file - entry point
 * @filename: Is the parameter to be checked
 * @text_content: Is the parameter to be checked
 *
 * Description: write a function that appends text at the end of a file.
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t a;
	int k;

	if (filename == NULL)
		return (-1);

	k = open(filename, O_APPEND | O_RDWR);
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
