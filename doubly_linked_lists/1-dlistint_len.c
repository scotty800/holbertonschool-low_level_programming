#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * dlistint_len - Counts the number of elements in a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 * Return: The number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);

}
