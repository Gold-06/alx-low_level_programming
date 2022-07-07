#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: print size
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, h;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
