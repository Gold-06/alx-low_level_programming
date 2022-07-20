#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y
 * @x: first input
 * @y: second input
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
