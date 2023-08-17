#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function
 *
 * Description: 'description'
 *
 * @h: parameter
 *
 * Return: return value
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int counter = 0;

	if (h == NULL || current == NULL)
		return (counter);

	while (current != NULL)
	{
		current = current->next;
		counter++;
	}
	return (counter);
}
