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

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (i < idx)
	{
		if (temp->next == NULL)
		{
			if (i == idx - 1)
				return (add_dnodeint_end(h, n));
			else
				return (NULL);
		}
		else
			temp = temp->next;
		i++;
	}
	temp2 = temp->prev;
	add_dnodeint(&temp, n);
	temp2->next = temp;
	temp->prev = temp2;
	return (temp);
}
