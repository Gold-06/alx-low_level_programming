#include "main.h"
/**
 * print_numbers - a function that print the numbers
 *
 * Return: Always 0 (Success)
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
