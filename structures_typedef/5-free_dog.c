#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs
 * @d: name of the struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
