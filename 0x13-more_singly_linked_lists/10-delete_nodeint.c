#include"lists.h"
/**
 * delete_nodeint_at_index - function to delete n node
 * @head: pointer to a pointer
 * @index: node s index
 *
 * Return: 1 succeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
	listint_t *ptr1, *ptr2;

	if (*head == NULL)
		return (-1);

	ptr1 = *head;

	if (index == 0)
	{
		*head = ptr1->next;
		free(ptr1);
		return (1);
	}

	while (i < (index - 1) && ptr1 != NULL)
	{
		ptr1 = ptr1->next;
		i++;
	}

	if (i != (index - 1) || ptr1->next == NULL)
		return (-1);

	ptr2 = ptr1->next;
	ptr1->next = (ptr1->next)->next;
	free(ptr2);

	return (1);
}
