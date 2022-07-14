#include "main.h"
#include <string.h>
/**
 * _strncpy - a function that copies strings
 * @dest: copy to
 * @src: copy from
 * @n: input numberof char
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
