#include "lists.h"

/**
 * free_listint - frees a linked list from list
 * @head: listint_t list to be freed up
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
