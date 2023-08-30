#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Remove node.
 * @head: First node Location.
 * @index: Location of node to be removed.
 * Return: 1 for working code.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int ctr;
	listint_t *hltd, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	hltd = *head;
	for (ctr = 0; ctr < index - 1; ctr++)
	{
		if (hltd->next == NULL)
			return (-1);
		hltd = hltd->next;
	}
	next = hltd->next;
	hltd->next = next->next;
	free(next);
	return (1);
}

