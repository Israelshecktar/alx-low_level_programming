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

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		s++;
		h = h->next;
	}
	return (s);
}
