#include "main.h"
/**
 * set_bit - a function that set value
 * @n: pointer
 * @index: index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);
	return (1);
}
