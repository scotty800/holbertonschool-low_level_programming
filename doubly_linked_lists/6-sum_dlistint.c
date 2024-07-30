#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_dlistint - Calculates the sum of all the data (n) in a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 * Return: The sum of all the data (n) in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
