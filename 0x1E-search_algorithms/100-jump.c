#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int step, prev, curr;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;
	curr = step;

	while (curr < (int)size && array[curr] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = curr;
		curr += step;
	}

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%d] and [%d]\n", prev, curr);

	while (prev <= curr && prev < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
