#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to add to the node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
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
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
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
