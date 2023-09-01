#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - change bit to 0
 * @n: argument
 * @index: desired place
 * Return: 1 if works, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

