#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a `struct dog`
 * @d: pointer to `struct dog`
 */
void print_dog(struct dog *d)
{
	char *name = (d->name == NULL) ? "(nil)" : d->name;
	char *owner = (d->owner == NULL) ? "(nil)" : d->owner;

	if (d == NULL)
	{
		printf("\n");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
