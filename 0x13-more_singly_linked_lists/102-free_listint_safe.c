#include"lists.h"
/**
 * free_listint_safe - function that frees the listint_t
 * @h: pointer to a pointer
 *
 * Return: the size of the linked list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len;
	int dif;
	listint_t *ptr;

	if (h || *h)
		return (0);
	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}

