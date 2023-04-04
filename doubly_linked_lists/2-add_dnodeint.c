#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * dlistint_t list
 * @head: head of the list
 * @n: data to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	if (*head != NULL)
		(*head)->prev = temp;

	temp->next = (*head);
	(*head) = temp;
	return (*head);
}
