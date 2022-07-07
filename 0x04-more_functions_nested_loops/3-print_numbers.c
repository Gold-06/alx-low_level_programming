#include "main.h"
/**
 * print_numbers - a function that print the numbers, from 0 to 9
 *
 * Return: 0-9 followed by a newline
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
