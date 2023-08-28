#include "lists.h"
/**
* get_nodeint_at_index - Function returns the nth node of a list
* @head: pointer to the head node
* @index: index of the node, starting at 0
* Return: nth node of a listint_t linked list, or NULL if the node
* is empty
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL)
	{
		if (counter == index)
		{
			return (head);
		}
		counter++;
		head = head->next;
	}

	return (NULL);
}
