#include "main.h"
/**
 * read_textfile - prints to output from a file
 * @filename: file to read
 * @letters:amount of characters to print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int alpha, beta;
	char *buff;
	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	alpha = read(file, buff, letters);
	if (alpha < 0)
	{
		free(buff);
		return (0);
	}
	buff[alpha] = '\0';
	close(file);
	beta = write(STDOUT_FILENO, buff, alpha);
	if (beta < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (beta);
}

