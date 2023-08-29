#include "lists.h"
/**
* print_listint_safe - function prints a listint_t list
* @head: head node to the list
* Return: Number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_lst = 0;
	const listint_t *rev = head, *fast = head;

	if (head == NULL)
	{
		exit(98);
	}

	while (rev != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)rev, rev->n);
		nodes_lst++;

		rev = rev->next;
		fast = fast->next->next;

		if (rev == fast)
		{
			printf("-> [%p] %d\n", (void *)rev, rev->n);
			return (nodes_lst);
		}
	}

	return (nodes_lst);
}
