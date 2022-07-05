#include <main.h>
/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int b, mn;
	mn = 0;

	while (mn < 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		mn++;
		_putchar('\n');
	}
	return (0);
}
