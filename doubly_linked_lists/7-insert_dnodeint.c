#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the doubly linked list
 * @idx: Index where the new node should be inserted, starting from 0
 * @n: Value to add to the new node
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp;
	unsigned int index;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (newNode == NULL)
	{
		free(h);
		return (NULL);
	}
	if (idx < 1)
	{
		return (NULL);
	}
	else if (idx == 1)
	{
		newNode->next = *h;
		*h = newNode;
	}
	else
	{
		tmp = *h;
		for (index = 1; index < idx - 1; index++)
			if (tmp != NULL)
				tmp = tmp->next;
	}
	if (tmp != NULL)
	{
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	else
		return (NULL);

	return (tmp);
}
