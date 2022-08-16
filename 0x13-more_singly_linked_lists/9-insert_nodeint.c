#include "lists.h"
/**
 * insert_nodeint_at_index - a function that insert new mode
 * @head: head of a list
 * @idx: index
 * @n: integer element
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		h->next = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}
	return (new);
}
