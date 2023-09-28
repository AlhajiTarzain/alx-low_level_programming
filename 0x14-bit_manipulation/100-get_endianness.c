#include "main.h"

/**
 * get_endianness - checks for lsb
 * Return: 0 for LSB 1 for HSB
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *clc = (char *) &j;

	return (*clc);
}

