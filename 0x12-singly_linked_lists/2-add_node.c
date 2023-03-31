#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to a pointer that points to the list
 * @str: string value of new list element
 *
 * Return: address of the new element or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = (list_t *) malloc(sizeof(list_t));
	list_t *ptr;
	unsigned int len;

	for (len = 0; str[len]; len++)
		;

	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		ptr = *head;
		*head = node;
		(*head)->next = ptr;
	}

	return (node);
}
