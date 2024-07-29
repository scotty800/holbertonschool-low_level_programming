#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	int size = 0;
	
	while(h != NULL)
	{
		if(h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str); 
		++size;
		h = h->next;
	}
	return (size);
}
