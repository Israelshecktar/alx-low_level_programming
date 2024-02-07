#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i;
	listint_t *curr, *next;

	if (list == NULL)
		return (NULL);

	step = sqrt(size);
	curr = list;
	next = list;

	while (next != NULL && next->n < value)
	{
		curr = next;
		for (i = 0; i < step && next != NULL; i++)
			next = next->next;
		if (next != NULL)
			printf("Value checked at index [%lu] = [%d]\n",
					next->index, next->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			curr->index, next ? next->index : curr->index);

	while (curr != NULL && curr->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		if (curr->n == value)
			return (curr);
		curr = curr->next;
	}

	return (NULL);
}
