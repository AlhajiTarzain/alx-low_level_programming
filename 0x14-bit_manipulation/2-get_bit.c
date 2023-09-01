#include "main.h"

/**
 * get_bit - value of anumber at place
 * @n: decimal number
 * @index: index
 * Return: value at place
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int number;

	number = (n >> index);
	if (index > 32)
	return (-1);
	return (number & 1);
}

