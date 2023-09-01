#include "main.h"
#include <stdlib.h>

/**
 * set_bit - change value of bit to 0
 * @n: argument
 * @index: index
 * Return: number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}

