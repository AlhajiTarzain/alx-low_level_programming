#include "main.h"

/**
 * main - replicates contents of a file into another
 * @instructions: arguments passed 
 * @contents: array that contains the arguments
 *
 * Return: always 0 (success)
 */
int main(int instructions, char *contents[])
{
	int file_read, file_write, a, j, k;
	char buf[BUFSIZ];

	if (instructions != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_read = open(contents[1], O_RDONLY);
	if (file_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", contents[1]);
		exit(98);
	}
	file_write = open(contents[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((a = read(file_read, buf, BUFSIZ)) > 0)
	{
		if (file_write < 0 || write(file_write, buf, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", contents[2]);
			close(file_read);
			exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", contents[1]);
		exit(98);
	}
	j = close(file_read);
	k = close(file_write);
	if (j < 0 || k < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_read);
		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_write);
		exit(100);
	}
	return (0);
}

