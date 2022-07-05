#include "main.h"
/**
 * print_last_digit - a function that print the last digit of a number
 * @nld: number last digit result
 * Return: Always 0 (Success)
 */
int print_last_digit(int nld)
{
	int ld;

	ld = (nld % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}
	_putchar(ld + '0');
	return (ld);
}
