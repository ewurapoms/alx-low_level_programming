#include "main.h"

void checks_IO(int new, int def, char *filename, char status);

/**
 * main - copies the content of one file to another
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, buffs = 1024;
	int prints, ends, final;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	checks_IO(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	checks_IO(dest, -1, argv[2], 'W');
	while (buffs == 1024)
	{
		buffs = read(src, buffer, sizeof(buffer));
		if (buffs == -1)
			checks_IO(-1, -1, argv[1], 'O');
		prints = write(dest, buffer, buffs);
		if (prints == -1)
			checks_IO(-1, -1, argv[2], 'W');
	}
	ends = close(src);
	checks_IO(ends, src, NULL, 'C');
	final = close(dest);
	checks_IO(final, dest, NULL, 'C');
	return (0);
}

/**
 * checks_IO - function that tells if a file can be opened or not
 * @new: checks for the file to be opened
 * @def: defines the file
 * @filename: is a pointer
 * @status: shows if file is closed or opened
 *
 */
void checks_IO(int new, int def, char *filename, char status)
{
	if (status == 67 && new == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close def %d\n", def);
		exit(100);
	}
	else if (status == 79 && new == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (status == 87 && new == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
