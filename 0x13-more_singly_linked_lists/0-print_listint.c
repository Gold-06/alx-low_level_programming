#include "lists.h"
/**
 * print_listint - a function that print elements
 * @h: head
 * Return: 0
 */
size_t print_listint(const listint_t *h)

{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
