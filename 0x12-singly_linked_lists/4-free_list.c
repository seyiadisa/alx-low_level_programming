#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to list to free
*/
void free_list(list_t *head)
{
	list_t *ptr, *tmpptr;

	if (head != NULL)
	{
		for (ptr = head; ptr->next != NULL;)
		{
			tmpptr = ptr->next;
			free(ptr);
			ptr = tmpptr;
		}
		free(ptr);
	}
}
