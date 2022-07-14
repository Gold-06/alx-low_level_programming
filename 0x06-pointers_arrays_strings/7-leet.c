#include "main.h"
/**
 * leet - afunction that encodes a string into 1337
 * @d: string
 * Return: dest
 */
char *leet(char *d)
{
	int count = 0, i;
	int low_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79,79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(d + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(d + count) == low_case[i] || *(d + count) == upper_case[i])
			{
				*(d + count) = num[i];
				break;
			}
		}
		count++;
	}
	return (d);
}
