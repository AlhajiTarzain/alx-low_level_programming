#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Total members in a list.
 * @head: Location of the first node of the list.
 * Return: Int.
 **/

int sum_listint(listint_t *head)
{
	int all = 0;

	while (head != NULL)
	{
		all += head->n;
		head = head->next;
	}
	return (all);
}


