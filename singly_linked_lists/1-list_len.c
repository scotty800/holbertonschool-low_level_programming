#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the list
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int index = 0;

	while (h != NULL)
	{
		h = h->next;
		index++;
	}
	return (index);
}
