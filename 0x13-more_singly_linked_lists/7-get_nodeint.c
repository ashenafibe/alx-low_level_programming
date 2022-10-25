#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - return the nth root of the node
 * @head: The head of the node
 *
 * @index: the index of the node
 *
 * Return: the turn th node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}

