#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that print a name
 * @name: name
 * @f: pointer to print up
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
