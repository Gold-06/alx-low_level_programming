#include "lists.h"
/**
 * free_listint2 - a function that frees list
 * @head: head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}
