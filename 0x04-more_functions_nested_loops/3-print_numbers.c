#include "main.h"
/**
 * print_numbers - a function that print numbers, from 0 to 9
 *
 * Return: 0-9 followed by a new line
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		_putchar(a + '0');
	_putchar('\n');
}
