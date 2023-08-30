#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - liberates a list.
 * @head: Location of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *pntr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		pntr = (*head)->next;
		free(*head);
		*head = pntr;
	}
}

