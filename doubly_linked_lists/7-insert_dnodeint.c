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
	dlistint_t *newNode, *tmp = *h;
	unsigned int index;

	if (h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (tmp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;

		return (newNode);
	}
	for (index = 0; tmp != NULL && index - 1; index++)
		tmp = tmp->next;

	newNode->next = tmp->next;
	newNode->prev = tmp;

	if (tmp != NULL)
		tmp->next->prev = newNode;
	tmp->next = newNode;

	return (newNode);
}
