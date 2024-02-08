#include "search_algos.h"

/**
 * interpolation_search - Searches for an item in a unifrom array.
 *
 * @array: Pointer to the first item.
 * @size: Size of the array.
 * @value: Value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, r, probe;

	l = 0, r = size - 1;

	while (value >= *(array + l) && value <= *(array + r) && l <= r)
	{
		if (size == 0)
			break;

		probe = l + (r - l) * (value - *(array + l))
			/ (*(array + r) - *(array + l));

		printf("Value checked array[%ld] = [%d]\n", probe, *(array + probe));

		if (*(array + probe) == value)
			return ((int) probe);

		if (*(array + probe) < value)
			l = probe + 1;
		else
			r = probe - 1;

	}

	probe = l + (r - l) * (value - *(array + l))
		/ (*(array + r) - *(array + l));
	printf("Value checked array[%lu] is out of range\n", probe);

	return (-1);
}
