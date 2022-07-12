#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[1] != '\0'; i++)
	{
		dest[1] = src[i];
	}
	return (dest);
}
