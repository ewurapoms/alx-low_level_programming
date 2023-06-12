#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: name of file to read
 * @letters: the number of letters to be read and printed
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, i, rp_lets;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		free(buff);
		return (0);
	}
	rp_lets = read(file_d, buff, letters);
	if (rp_lets == -1)
	{
		close(file_d);
		free(buff);
		return (0);
	}
	for (i = 0; i < rp_lets; i++)
	{
		if (write(STDOUT_FILENO, &buff[i], 1) == -1)
		{
			close(file_d);
			free(buff);
			return (0);
		}
	}
	close(file_d);
	free(buff);
	return (rp_lets);
}
