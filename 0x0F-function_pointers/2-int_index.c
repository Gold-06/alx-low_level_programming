#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches an integer
 * @array: array
 * @size: size of elements
 * @cmp: pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
