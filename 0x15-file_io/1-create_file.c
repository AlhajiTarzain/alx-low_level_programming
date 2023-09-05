#include "main.h"

/**
 * create_file - puts text in a new file
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, j, k = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[k])
			k++;
		j = write(file, text_content, k);
		if (j != k)
			return (-1);
	}

	close(file);

	return (1);
}

