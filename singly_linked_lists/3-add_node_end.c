#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *cpy_ptr;
	list_t *newNode;
	list_t *last;
	int index = 0;

	if (str == NULL)
		return (NULL);

	cpy_ptr = strdup(str);
	if (cpy_ptr == NULL)
		return (NULL);

	while (str[index])
		index++;

	newNode = malloc(sizeof(list_t));
	if (head == NULL)
		return (newNode);

	newNode->str = cpy_ptr;
	newNode->len = index;
	newNode->next = NULL;

	if (newNode == NULL)
	{
		free(cpy_ptr);
		return (NULL);
	}
	if (*head == NULL)
		*head = newNode;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
	}
	return (newNode);
}
