#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Remove First member in list.
 * @head: *p to a list.
 * Return: Integer if executed correct.
 **/

int pop_listint(listint_t **head)
{
	listint_t *pntr;
	int members;

	if (*head == NULL)
		return (0);

	pntr = *head;
	*head = pntr->next;
	members = pntr->n;
	free(pntr);
	return (members);
}

