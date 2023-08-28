#include "lists.h"
/**
* add_nodeint_end - function adds node to the end of a list
* @head: double pointer to the head node
* @n: new data to add to the new node
* Return: address to the new_node or Null if malloc fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Memory allocation fails\n");

		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new;
	}

	return (new);
}
