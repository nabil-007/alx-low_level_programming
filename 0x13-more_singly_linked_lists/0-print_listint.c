#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stddef.h>
/**
 * print_listint - function to print elements of a list
 * @h: pointer to a list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
