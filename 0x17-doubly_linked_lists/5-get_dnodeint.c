#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function
 *
 * Description: 'description'
 *
 * @head: parameter
 * @index: parameter
 *
 * Return: return value
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i <= index)
	{
		if (i == index)
		{
			return (current);
		}
		else
		{
			current = current->next;
			i++;
		}
	}
	return (NULL);
}
