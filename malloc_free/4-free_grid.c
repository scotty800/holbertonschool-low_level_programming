#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid -libere une grille a deux dimensions
 * @grid: la grille a liberer
 * @height: la hauteur de la grille
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
