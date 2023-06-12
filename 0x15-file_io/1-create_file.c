#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: input
 *
 * Return: 1 on success, -1 (failed)
 */

int create_file(const char *filename, char *text_content)
{
	int file = 0;
	int temp = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[temp] != '\0')
			++temp;
		if (write(file, text_content, temp) == -1)
			return (-1);
	}
	close(file);
	return (1);
}
