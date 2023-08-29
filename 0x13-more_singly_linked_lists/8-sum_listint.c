#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data in a listint_t list
 * @head: first node in the linked list to be cheaked
 *
 * Return: resulting sum of the lsit
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
