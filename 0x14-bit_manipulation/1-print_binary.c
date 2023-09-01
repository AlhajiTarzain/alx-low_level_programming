#include "main.h"

/**
 * print_binary - writes the binary
 * @n: argument
 */
void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int place;

	for (i = 63; i >= 0; i--)
	{
		place = n >> i;

		if (place & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
