#include "main.h"
/**
 * get_endianness - a function that check the endianccess
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;
	return ((int)*c);
}
