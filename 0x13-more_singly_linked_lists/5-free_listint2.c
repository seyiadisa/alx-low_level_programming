#include "lists.h"

/**
 * free_listint2 - frees a `listint_t` list and sets `head` to NULL
 * @head: pointer to pointer to linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *tmpptr;

	if (head != NULL)
	{
		for (ptr = *head; ptr != NULL;)
		{
			tmpptr = ptr;
			ptr = ptr->next;
			free(tmpptr);
		}

		*head = NULL;
	}
}
