#include "main.h"

/**
 * flip_bits -  bits you want to change
 * @n: argument
 * @m: changer
 * Return: changes
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, changes = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			changes += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (changes);
}

