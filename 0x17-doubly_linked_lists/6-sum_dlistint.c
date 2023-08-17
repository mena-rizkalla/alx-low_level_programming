#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function
 *
 * Description: 'description'
 *
 * @head: parameter
 *
 * Return: return value
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
