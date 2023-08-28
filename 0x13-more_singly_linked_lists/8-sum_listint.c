#include "lists.h"
/**
* sum_listint - function that returns the sum of all data in the nod
* @head: the pointer to the head node
* Return: sum of node
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
