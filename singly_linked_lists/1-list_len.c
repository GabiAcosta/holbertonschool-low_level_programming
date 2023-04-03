#include "lists.h"
/**
 * print_list - function that returns the number of elements in a 
 * linked list_t list
 * @h: head of the list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
