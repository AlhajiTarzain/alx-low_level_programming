#include "main.h"

/**
 * binary_to_uint - changes binary to unint
 * @b: contains number to changes
 * Return: unint
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int baseTen = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		baseTen = 2 * baseTen + (b[i] - '0');
	}
	return (baseTen);
}
