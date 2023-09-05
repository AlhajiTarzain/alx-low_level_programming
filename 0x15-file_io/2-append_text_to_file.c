#include "main.h"

/**
 * append_text_to_file - adds more text to a file
 * @filename: destination of new content
 * @text_content: content to be added
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int files, j, k = 0;

	if (!filename)
		return (-1);

	files = open(filename, O_WRONLY | O_APPEND);
	if (files < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[k])
			k++;
		j = write(files, text_content, k);
		if (j != k)
			return (-1);
	}

	close(files);

	return (1);
}

