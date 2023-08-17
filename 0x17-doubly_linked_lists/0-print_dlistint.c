#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function
 *
 * Description: 'description'
 *
 * @h: parameter
 *
 * Return: return value
 */


size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int counter = 0;

	if (h == NULL || current == NULL)
		return (counter);

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		counter++;
	}
	return (counter);
}
