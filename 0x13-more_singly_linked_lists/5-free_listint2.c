#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free list or remove value or node
 * @head: The head of the linked list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
