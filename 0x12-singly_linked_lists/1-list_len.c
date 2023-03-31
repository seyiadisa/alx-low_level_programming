#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list of type list_t
 * @h: pointer to linked list
 *
 * Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t num = 0;

	if (h == NULL)
		return (num);

	for (num = 1, ptr = h; ptr->next != NULL; ptr = ptr->next, num++)
		;

	return (num);
}
