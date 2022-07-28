#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenate strings
 * @s1: first string
 * @s2: second string
 * @n: num of byte
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i, j, co, co_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n  < j)
		j = n;

	j += i;
	array = malloc(sizeof(char *) * (j + 1));

	if (array == NULL)
		return (NULL);

	for (co = 0; co < i; co++)
		array[co] = s1[co];
	for (co_2 = 0; co < j; co_2++)
	{
		array[co_2] = s2[co_2];
	}
		array[co] = '\0';
	return (array);
}
