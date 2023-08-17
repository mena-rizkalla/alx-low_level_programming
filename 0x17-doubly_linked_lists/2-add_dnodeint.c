#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function
 *
 * Description: 'description'
 *
 * @head: parameter
 * @n: parameter
 *
 * Return: return value
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t *));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	else
	{
		new->next = NULL;
	}
	*head = new;

	return (*head);
}
