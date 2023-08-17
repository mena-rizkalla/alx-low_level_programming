#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 *
 * Description: 'description'
 *
 * @head: parameter
 * @index: parameter
 *
 * Return: return value
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp = *head;
	unsigned int i = 0;

	while (current != NULL && i <= index)
	{
		if (i < index)
		{
			temp = current;
			current = current->next;
		}
		else
		{
			if (temp == current)
			{
				(*head) = (*head)->next;
				return (1);
			}
			else
			{
				current = current->next;
				temp->next = current;
				current->prev = temp;
				return (1);
			}
		}
		i++;
	}
	if (i == index && current != NULL)
	{
		current = temp->prev;
		current->next = NULL;
		return (1);
	}
	return (-1);
}
