#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position
 * @h: head of the list
 * @idx: is the index of the list where the new node should be added
 * @n: data to add
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2;
	unsigned int i = 0;

	if (!*h)
		return (NULL);
	temp = *h;
	while (idx != i)
	{
		if (temp->next)
		{
			temp = temp->next;
			i++;
		}
		else
		{
			return (NULL);
		}
	}
	temp2 = temp->prev;
	add_dnodeint(&temp, n);
	temp2->next = temp;
	temp->prev = temp2;
	return (*h);
}
