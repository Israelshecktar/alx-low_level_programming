#include "lists.h"
/**
* add_nodeint - function adds a new node at the beginning
* @head: double pointer to the head node to the list
* @n: the data to add to the new node
* Return: the address to the new node or NULL if malloc fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	new->n = n;

	new->next = *head;

	*head = new;

	return (new);
}
