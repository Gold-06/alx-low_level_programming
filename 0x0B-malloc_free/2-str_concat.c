#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenate
 * @s1: input 1
 * @s2: input 2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, k = 0;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	array = (char *)malloc(l * sizeof(char) + 1);
	if (array == NULL)
		return (NULL);

	j = 0;
	while (k < l)
	{
		if (k < i)
			array[k] = s1[k];
		if (k >= i)
		{
			array[k] = s2[j];
			j++;
		}
		k++;
	}
	array[k] = '\0';
	return (array);
}
