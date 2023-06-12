#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is name of the file.
 * @text_content: is str input
 * Return: 1 for file exist, -1 for does not exist/non-write permissions
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, i = 0;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_APPEND | O_WRONLY);
	if (file_d == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
		if (write(file_d, text_content, i) == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
