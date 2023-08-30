#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - ADD new node to a desired place.
 * @head: First node location
 * @idx: Position of the new node to be inserted in.
 * @n: new node information.
 * Return: Location of the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nn, *pntr;
	unsigned int t = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	pntr = *head;
	for (; t < idx - 1 && pntr != NULL; t++)
		pntr = pntr->next;
	if (pntr == NULL)
		return (NULL);
	}
	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}
	nn->next = pntr->next;
	pntr->next = nn;
	return (nn);
}
