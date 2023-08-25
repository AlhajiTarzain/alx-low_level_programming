#include <stdlib.h>
#include "lists.h"

/**
 * free_list - empties a linked list
 * @head: list_t list yet to be emptied
 */
void free_list(list_t *head)
{
	list_t *pointer;

	while (head)
	{
		pointer = head->next;
		free(head->str);
		free(head);
		head = pointer;
	}
}

