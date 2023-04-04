#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: head of the list
 * @str: string to add to the node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0, i = 0;

	while (str[i])
	{
		len++;
		i++;
	}

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = *head;
	*head = node;

	return (*head);
}
