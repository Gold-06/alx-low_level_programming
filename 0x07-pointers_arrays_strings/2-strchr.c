#include "main.h"
/**
 * _strchr - a function that locate character in string
 * @s: first input
 * @c: second input
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int d;

	for (d = 0; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (s + d);
	}
	return (NULL);
}
