#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: Always 0
 */
int main(int argc, _attribute_((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}