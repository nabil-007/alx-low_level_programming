#include"lists.h"
#include<stdlib.h>
/**
 * pop_listint - function to delete the head of a list
 * @head: pointer to a pointer
 *
 * Retunr: the head node data n
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}
	ptr = *head;
	return (ptr->n);
	free (head);
}

