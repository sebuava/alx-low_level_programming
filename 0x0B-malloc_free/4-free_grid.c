#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees a 2dimensional grid previously created
* @grid: 2dimensional grid
* @height: height dimension of grid
* Description: frees memory of grid
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
