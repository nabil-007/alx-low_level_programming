#include"lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at position
 * @head: pointer to a pointer
 * @idx: the index of the list where the node should be added
 * @n: the data
 *
 * Return: the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i == idx)
	{
		ptr = new_node;
	}
	return (new_node);
}
