#include "lists.h"
/**
 * free_listint - a function that frees list
 * @head: head
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
