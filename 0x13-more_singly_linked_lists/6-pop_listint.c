#include"lists.h"
#include<stdlib.h>
/**
 * pop_listint - function to delete the head of a list
 * @head: pointer to a pointer
 *
 * Return: the head node data n
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (data);
}

