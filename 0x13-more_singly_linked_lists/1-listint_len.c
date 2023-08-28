#include "lists.h"
#include <stdio.h>
/**
* listint_len - function returns number of element in the list
* @h: pointer to the head node
* Return: 0 success
*/
size_t listint_len(const listint_t *h)
{
	size_t Node_num = 0;

	while (h != NULL)
	{
		Node_num++;
		h = h->next;
	}

	return (Node_num);
}
