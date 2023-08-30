#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Append node to list beginning.
 * @head: Location of first node.
 * @n: Number to put in latest node.
 * Return: Location of the latest node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pntr;

	pntr = malloc(sizeof(listint_t));
	if (pntr == NULL)
		return (NULL);

	pntr->n = n;
	pntr->next = *head;
	*head = pntr;
	return (*head);
}
