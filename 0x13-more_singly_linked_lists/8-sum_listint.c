#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - The sum of the list
 * @head: The head of the node
 *
 * Return: the sum of the list
 */

int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
