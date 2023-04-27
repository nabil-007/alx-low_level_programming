#include "lists.h"

/**
 * list_len - a function that number node
 * @h: linked list
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
