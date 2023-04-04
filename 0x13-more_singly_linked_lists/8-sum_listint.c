#include "lists.h"

/**
 * sum_listint - sums up all of the data (n) of a `listint_t` linked list
 * @head: pointer to list
 *
 * Return: sum of data as int
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		for (ptr = head; ptr != NULL; ptr = ptr->next)
		{
			sum += ptr->n;
		}
	}

	return (sum);
}
