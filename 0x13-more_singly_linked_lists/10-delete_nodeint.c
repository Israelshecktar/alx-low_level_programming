#include "lists.h"
/**
* delete_nodeint_at_index - function deletes node at index
* @head: double pointer to the head node
* @index: location where the index is located
* Return: 1 if it succeed or -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	previous = NULL;
	count = 0;

	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	previous->next = current->next;
	free(current);

	return (1);
}
