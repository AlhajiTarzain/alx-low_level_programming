#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Displays members of a SLL.
 * @h: *p to a list.
 * Return: Int.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *pntr;
	unsigned int checker = 0;

	pntr = h;
	while (pntr)
	{
		printf("%d\n", pntr->n);
		checker++;
		pntr = pntr->next;
	}
	return (checker);
}
