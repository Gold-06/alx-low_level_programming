#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - get_op_func has operator correlated
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
			exit(99);
	}
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", operation(i, j));
	return (0);
}
