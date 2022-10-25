#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Delete the head of the node
 * @head: The head of the node
 *
 * Return: return zero if the node is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
