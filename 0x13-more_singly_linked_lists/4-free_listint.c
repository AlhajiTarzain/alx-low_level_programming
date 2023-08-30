#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Creates space in a list.
 * @head: Location of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *ptr, *ptr2;

	ptr = head;
	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		free(ptr);
		ptr = ptr2;
	}
}

