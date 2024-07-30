#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 * Return: size
 */

size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);

}
