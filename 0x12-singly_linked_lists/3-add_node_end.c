#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pointer, *pointer2;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	pointer = malloc(sizeof(list_t));
	if (pointer == NULL)
		return (NULL);

	pointer->str = strdup(str);
	if (pointer->str == NULL)
	{
		free(pointer);
		return (NULL);
	}
	while (str[length])
		length++;
	pointer->len = length;
	pointer->next = NULL;

	if (*head == NULL)
	{
		*head = pointer;
		return (pointer);
	}

	pointer2 = *head;
	while (pointer2->next)
		pointer2 = pointer2->next;
	pointer2->next = pointer;
	return (pointer);
}

