#include "lists.h"

/**
 * print_list - prints all the elements of a linked list of type list_t
 * @h: pointer to linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t nodes = 0;
	int i;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		for (ptr = h; ptr != NULL; ptr = ptr->next, nodes++)
		{
			_putchar('[');
			_putchar((ptr->str != NULL ? ptr->len + '0' : 0 + '0'));
			_putchar(']');
			_putchar(' ');

			if (ptr->str != NULL)
			{
				for (i = 0; ptr->str[i]; i++)
				{
					_putchar(ptr->str[i]);
				}
			}
			else
			{
				_putchar('(');
				_putchar('n');
				_putchar('i');
				_putchar('l');
				_putchar(')');
			}
			_putchar('\n');
		}
	}

	return (nodes);
}
