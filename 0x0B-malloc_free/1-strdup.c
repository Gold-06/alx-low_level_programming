#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns pointer
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	unsigned int i, end;
	char *array;

	if (str == NULL)
		return (NULL);
	for (end = 0; str[end] != '\0'; end++)
		;
	array = (char *)malloc(sizeof(char) * (end + 1));

	for (i = 0; i <= end; i++)
		array[i] = str[i];

	if (array == NULL)
		return (NULL);
	return (array);
}
