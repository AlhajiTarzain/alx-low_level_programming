#include "lists.h"

/**
 * listint_len - Solve for the number of members.
 * @h: Pointer to a list.
 * Return: Int.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *pntr;
	unsigned int checker = 0;

	pntr = h;
	while (pntr)
	{
		checker++;
		pntr = pntr->next;
	}
	return (checker);
}

