#include "lists.h"
#include <stdio.h>

/**
 * cycle_detector - finds if there is a cycle in a linked list
 */
const listint_t *cycle_detector(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}
	}

	return (NULL);
}

/**
 * print_listint_safe - prints a `listint_t` list
 * @head: pointer to list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	const listint_t *cycle;
	size_t count = 0;
	int n = 0;

	cycle = cycle_detector(head);

	if (head == NULL)
	{
		exit(98);
	}
	else
	{
		for (ptr = head; ptr != NULL; ptr = ptr->next, count++)
		{
			if (cycle == ptr)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				n++;

				if (n == 1)
					break;
			}
			printf("[%p] %d\n", (void *)ptr, ptr->n);
		}
	}

	return (count);
}
