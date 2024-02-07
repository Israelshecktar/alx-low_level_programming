#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_range(int *array, size_t start, size_t end, int value);
void print_array(int *array, size_t start, size_t end);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_helper(int *array, int low, int high, int value);
void print_array_t(int *array, int start, int end);
int binary_search_helper(int *array, int value,size_t low, size_t high);
size_t min(size_t a, size_t b);
listint_t *jump_list(listint_t *list, size_t size, int value);
#endif /* SEARCH_ALGOS_H */
