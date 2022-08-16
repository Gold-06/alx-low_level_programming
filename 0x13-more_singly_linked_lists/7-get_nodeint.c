#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns nth node
 * @head: head
 * @index
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
