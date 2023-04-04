#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list
 * @head: head of the list
 * @n: data to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->prev = NULL;
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		(*head) = node;
		return (node);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}
