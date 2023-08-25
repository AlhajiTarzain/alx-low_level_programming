#include "lists.h"

/**
 * list_len - Show number of elements.
 * @i: Pointer to a list.
 * Return: Int.
 **/

size_t list_len(const list_t *i)
{
	const list_t *pointer;
	unsigned int check = 0;

	pointer = i;
	while (pointer)
	{
		check++;
		pointer = pointer->next;
	}
	return (check);
}

