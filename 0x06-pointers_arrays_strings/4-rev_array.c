#include "main.h"
/**
 * reverse_array - a function that reverse the content of an array integer
 * @a: content
 * @n: element of content
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
