#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char write;

	for (write = 'a'; write <= 'z'; write++)
	{
		if (write != 'e' && write != 'q')
			putchar(write);
	}

	putchar('\n');

	return (0);
}
