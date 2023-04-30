#include"lists.h"
#include<stdlib.h>
/**
 * free_listint-function to free the list
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}

