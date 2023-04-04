#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_int list
 * @h: pointer to beginning of list
 *
 * Return: number of list nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		for (ptr = h; ptr != NULL; ptr = ptr->next, count++)
			printf("%d\n", ptr->n);
	}

	return (count);
}
