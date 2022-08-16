#include "lists.h"
/**
 * listint_len - a function that returns the number of element
 * @h: head
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
