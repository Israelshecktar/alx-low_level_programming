#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position in list
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: integer to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int i;

	if (h == NULL || *h == NULL || idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	temp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = new;
	}
	temp->next = new;
	return (new);
}
