#include "lists.h"
/**
 * listint_len - function to return the number elements of a list
 * @h: pointer to list
 *
 * Return: the length
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
