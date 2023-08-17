#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - function
 *
 * Description: 'description'
 *
 * @head: parameter
 * @n: parameter
 *
 * Return: return value
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t *));
	dlistint_t *current = *head;
	dlistint_t *temp = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
	{
		while (current != NULL)
		{
			temp = current;
			current = current->next;
		}
		new->next = NULL;
		new->prev = temp;
		temp->next = new;
		return (new);
	}
	else
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
}
