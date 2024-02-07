#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * using the Linear search algorithm
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *next;

	if (list == NULL)
		return (NULL);

	curr = list;
	next = list->express;

	while (next != NULL && next->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", next->index, next->n);
		curr = next;
		next = next->express;
	}

	if (next == NULL)
	{
		next = curr;
		while (next->next != NULL)
			next = next->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			curr->index, next->index);

	while (curr != NULL && curr->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		if (curr->n == value)
			return (curr);
		curr = curr->next;
	}

	return (NULL);
}
