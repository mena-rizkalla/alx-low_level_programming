#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 *
 * Description: 'description'
 *
 * @h: parameter
 * @idx: parameter
 * @n: parameter
 *
 * Return: return value
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h, *temp = *h, *ret_node;
	unsigned int i = 0;

	while (current != NULL && i <= idx)
	{
		if (i < idx)
		{
			temp = current;
			current = current->next;
		}
		else
		{
			if (temp == current)
			{
				ret_node = add_dnodeint(h, n);
				return (ret_node);
			}
			else
			{
				new = malloc(sizeof(dlistint_t *));
				if (new == NULL)
					return (NULL);
				new->n = n;
				new->next = current;
				new->prev = temp;
				current->prev = new;
				temp->next = new;
				return (new);
			}
		}
		i++;
	}
	if (i == idx)
	{
		ret_node = add_dnodeint_end(h, n);
		return (ret_node);
	}
	return (NULL);
}
