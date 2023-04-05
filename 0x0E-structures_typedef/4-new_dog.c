#include "dog.h"

/**
 * new_dog - creates a new `struct dog`
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: pointer to new `struct dog`
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	int i, ln, lo;
	dog_t *dptr = (dog_t *)malloc(sizeof(dog_t));

	if (dptr == NULL)
		return (NULL);

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ln = 0;
	lo = 0;

	while (*(name + ln++))
		;
	while (*(owner + lo++))
		;

	n = malloc(ln * sizeof(char));
	o = malloc(lo * sizeof(char));

	for (i = 0; i < ln; *(n + i) = *(name + i), i++)
		;
	for (i = 0; i < lo; *(o + i) = *(owner + i), i++)
		;

	dptr->age = age;
	dptr->name = n;
	dptr->owner = o;

	return (dptr);
}
