#include "lists.h"
/**
* free_listint2 - function frees a listint_t list
* @head: pointer to the head node
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
