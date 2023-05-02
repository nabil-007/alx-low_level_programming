#include "lists.h"
#include<stdio.h>
/**
 * print_listint - function to print elements of a list
 * @h: pointer to a list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
return (num);
}
