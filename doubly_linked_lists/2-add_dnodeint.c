#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Integer value to store in the new node
 * Return: Address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	if (newNode == NULL)
	{
		free(head);
		return (NULL);
	}

	return (newNode);


}
