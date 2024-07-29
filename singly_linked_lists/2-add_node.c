#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *cpy_ptr;
	list_t *newNode;
	int index = 0;

	if (str == NULL)
		return (NULL);

	cpy_ptr = strdup(str);
	if (cpy_ptr == NULL)
		return (NULL);

	while (str[index])
		index++;

	newNode = malloc(sizeof(list_t));

	newNode->str = cpy_ptr;
	newNode->len = index;
	newNode->next = *head;

	if (newNode == NULL)
	{
		free(cpy_ptr);
		return (NULL);
	}

	*head = newNode;

	return (newNode);
}
