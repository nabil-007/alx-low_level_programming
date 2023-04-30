#include"lists.h"
#include<stdlib.h>
/**
 * add_nodeint - function to add node at beginning of a list
 * @n: the data to add
 * @head: pointer to heard pointer
 *
 * Return: the adresse of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	if (*head == NULL)
		*head = new_node
	else
	{
		tmp = *head;
		while (tmp->next =! NULL)
		{
			tmp tmp->next;
		tmp->next = new_node;
		}
	}

return (new_node);
}
