#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - a function that print a struct drug
 * @d: struct name
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nill)\n");
	if (d->age < 0)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nill)\n");
	else

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
