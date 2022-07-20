#include "main.h"
/**
 * _print_rev_recursion - a function that print a string in reverse
 * @s: input
 * Return: ALway 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		return;
		_putchar(*s);
	}
}
