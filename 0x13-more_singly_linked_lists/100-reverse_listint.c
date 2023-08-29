#include "lists.h"
/**
* reverse_listint - function reverses a list
* @head: double pointer to the head node
* Return: pointer to the first node of rev list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;

		(*head)->next = previous;

		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
