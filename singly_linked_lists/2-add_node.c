#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the list
 * Return: The number of elements in the list
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
