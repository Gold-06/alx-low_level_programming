#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 * @c: input
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
