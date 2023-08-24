#include <stdio.h>
#include "lists.h"

/**
 * print_list - function prints list of elements
 * @h: strings to be counted
 * @list_t: constant nodes of strings
 * Return: NULL or no of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		s++;
		h = h->next;
	}
	return (s);
}
