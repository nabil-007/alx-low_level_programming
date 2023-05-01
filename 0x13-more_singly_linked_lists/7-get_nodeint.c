#include"lists.h"
/**
 * get_nodeint_at_index - function that return n node of linked list
 * @head: pointer to the node
 * @index: the index of the node
 *
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < index)
		{
			i++;
			head = head->next;
		}
		if (i == index)
		{
		return (head);
		}
	}
	return (NULL);
}

