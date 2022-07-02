#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int b;

	for (b = 0; b < 90; b++)
	{
		for ()
		{
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
		}
		if (b != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
