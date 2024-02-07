#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using the Advanced binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	return (advanced_binary_helper(array, low, high, value));
}

/**
 * advanced_binary_helper - Searches for a value in a sorted array of integers
 * within a given range using the Advanced binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: The first index of the range
 * @high: The last index of the range
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
int advanced_binary_helper(int *array, int low, int high, int value)
{
	int mid;

	print_array(array, low, high);
	if (low > high)
		return (-1);

	mid = (low + high) / 2;
	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_helper(array, low, mid - 1, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_helper(array, mid + 1, high, value));
	else
		return (advanced_binary_helper(array, low, mid - 1, value));
}

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @start: The first index of the array
 * @end: The last index of the array
 */
void print_array(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}
