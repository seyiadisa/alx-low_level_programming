#include "lists.h"

/**
 * free_listint - frees a `listint_t` list
 * @head: pointer to list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *tmpptr;

	if (head != NULL)
	{
		for (ptr = head; ptr != NULL;)
		{
			tmpptr = ptr;
			ptr = ptr->next;
			free(tmpptr);
		}
	}
}
