#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function
 *
 * Description: 'description'
 *
 * @head: parameter
 *
 * Return: return value
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
