#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that return pointer
 * @width: input
 * @height: input
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **iarray;
	int i, n, k, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	iarray = malloc(sizeof(int *) * height);

	if (iarray == NULL)
	{
		free(iarray);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(int) * width);
		if (iarray[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(iarray[j]);
			}
			free(iarray);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (n = 0; n < width; n++)
			iarray[k][n] = 0;
	}
	return (iarray);
}
