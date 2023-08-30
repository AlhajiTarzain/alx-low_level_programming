#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Append node end of a list.
 * @head: Location of the preceding node of a list.
 * @n: Number to put in the new node.
 * Return: Location of the node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pntr, *pntr2;

	pntr = malloc(sizeof(listint_t));
	if (pntr == NULL)
		return (NULL);

	pntr->n = n;
	pntr->next = NULL;

	if (*head == NULL)
	{
		*head = pntr;
		return (pntr);
	}

	pntr2 = *head;
	while (pntr2->next)
		pntr2 = pntr2->next;
	pntr2->next = pntr;
	return (pntr);
}
