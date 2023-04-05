#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list
 * @head: head of the list
 * @index: index of the node, starting from 0
 * Return: nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;
	dlistint_t *temp = head;

	if (!head)
		return (NULL);

	while (index != node)
	{
		if (temp->next)
		{
			temp = temp->next;
			node++;
		}
		else
		{
			return (NULL);
		}
	}
	return (temp);
}
