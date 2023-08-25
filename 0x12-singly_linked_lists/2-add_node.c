#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - puts a new node at the start of a list
 * @head: pointer to the pointer of the list_t list
 * @str: new string to put in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	nnode = malloc(sizeof(list_t));
	if (!nnode)
		return (NULL);

	nnode->str = strdup(str);
	nnode->len = len;
	nnode->next = (*head);
	(*head) = nnode;

	return (*head);
}

