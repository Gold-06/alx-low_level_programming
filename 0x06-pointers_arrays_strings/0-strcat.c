#include "main.h"
/**
 * *_strcat - a function that concatinate two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concatinate strings
 */
char *_strcat(char *dest, char *src)
{
	int d, n;

	for (d = 0; dest[d] != '\0'; d++)
	{
	}
	for (n = 0; (dest[d + n] = *src++) != '\0'; n++)
	{
	}

	return (dest);
}
