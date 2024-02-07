#include "search_algos.h"

/**
 * binary_search - binary search on sorted array
 *
 * @array:is a pointer to the first element of the array to search in
 * @size:is the number of elements in array
 * @value: is the value to search for
 *
 * Return:return the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		size_t i, m;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);

			if (i == r)
			{
				printf("\n");
				break;
			}
			printf(", ");
		}
		m = (l + r) / 2;

		if (value == array[m])
		{
			return (m);
		}
		else if (value < array[m])
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return (-1);
}
