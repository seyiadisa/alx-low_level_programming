#include "dog.h"

/**
 * free_dog - frees a `struct dog`
 * @d: pointer to `struct dog`
 */
void free_dog(dog_t *d)
{
	free(d);
}
