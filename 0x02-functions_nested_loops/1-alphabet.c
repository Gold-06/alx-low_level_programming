#include "main.h"
/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	int b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
	return (0);
}
