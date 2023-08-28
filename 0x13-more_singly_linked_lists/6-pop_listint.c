#include "lists.h"
/**
* pop_listint - function deletes head node of listint_t
* @head: head node to be deleted
* Return: head node or 0 if node is empty
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *nxt_node;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;

	nxt_node = (*head)->next;

	free(*head);
	*head = nxt_node;

	return (n);
}
