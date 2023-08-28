#include "lists.h"
/**
* insert_nodeint_at_index - Function inserts a new node at a given position
* @head: pointer to the head node
* @idx: index to where new node is to be inserted
* @n: the new node to be inserted
* Return: retuens address of the new nodes or NULL if malloc failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *previous;
	unsigned int count;

	listint_t *new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}
	new->n = n;
	if (*head == NULL && idx == 0)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	previous = NULL;

	while (current != NULL && count < idx)
	{
		previous = current;
		current = current->next;
		count++;
	}
	if (count < idx)
	{
		free(new);
		return (NULL);
	}
	new->next = current;
	if (previous != NULL)
	{
		previous->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
