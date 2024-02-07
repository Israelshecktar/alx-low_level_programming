#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index, step, limit;

	if (array == NULL)
		return (-1);

	index = 1;
	step = 1;
	limit = size;

	while (index < limit && array[index] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		index *= 2;
		step *= 2;
	}

	if (index >= limit)
		index = limit - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", index / 2, index);
	return (binary_search_range(array, index / 2, index, value));
}

/**
 * binary_search_range - Searches for a value in a sorted array of integers
 * within a given range using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @start: The first index of the range
 * @end: The last index of the range
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
int binary_search_range(int *array, size_t start, size_t end, int value)
{
	size_t low, high, mid;

	low = start;
	high = end;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @start: The first index of the array
 * @end: The last index of the array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}
