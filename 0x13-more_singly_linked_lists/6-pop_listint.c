#include "lists.h"
/**
 * pop_listint - a function that deletes the head mode
 * @head: head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);
	curr = *head;
	hnode = curr->n;
	h = curr->next;
	free(curr);
	*head = h;
	return (hnode);
}
