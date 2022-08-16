#include "lists.h"
/**
 * sum_listint - a function that returns sum
 * @head: head of a list
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
