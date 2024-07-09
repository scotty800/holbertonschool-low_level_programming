#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - ConcatÃ¨ne deux chaÃ®nes de carac
 *@s1: La premiÃ¨re chaÃ® conca
 *@s2: La deuxiÃ¨me chine® cont�n
 *Return:Pointeur vers la nouvelle chaÃ®ne conc
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 0 || height < 0)
	{
		return NULL;
	}

	array = (int**) malloc(width * sizeof(int*));
	for(i = 0; i < width; i++)
	{
		array[i] = (int*) malloc(height * sizeof(int));
	}

	if (array == NULL)
	{
		return NULL;
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
