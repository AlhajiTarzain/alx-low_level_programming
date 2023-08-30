#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Locate a node .
 * @head: Location of the first node in a list.
 * @index: Find node from 0.
 * Return: location of Node .
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int loc = 0;

	if (head == NULL)
		return (NULL);
	for (loc = 0; loc < index; loc++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

