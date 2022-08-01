#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - a function that frees dog
 * @d: struct to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
