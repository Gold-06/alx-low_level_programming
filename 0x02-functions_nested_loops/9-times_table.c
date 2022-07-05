#include "main.h"
/**
 * times_table - a function that print the 9 times table
 * rone = row, cone = column, d = digits of current results
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int rone, cone, d;

	for  (rone = 0; cone <= 9; cone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= 9; cone++)
		{
			d = (rone * cone);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
