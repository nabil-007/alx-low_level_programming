#include"lists.h"
#include<stdlib.h>
/**
 * free_listint2- function thta free a list
 * @head: pointer to a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
}
