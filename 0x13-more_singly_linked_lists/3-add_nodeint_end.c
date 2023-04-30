#include "lists.h"
#include<stdlib.h>
#include<string.h>
/**
 * add_nodeint_end - function to add node aat the end 
 * @head: pointer to a pointer
 * @n: the data to add
 *
 * Return: the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next =NULL;
	while (head)
	{
		tmp = *head;
		tmp = tmp->next;
	}
	next = new_node;
	return (new_node);
}
