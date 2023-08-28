#include <stdio.h>
#include "lists.h"
/**
* print_listint - function prints all elements in the node
* @h: List of nodes int the list
* Return: 0 success
*/
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
