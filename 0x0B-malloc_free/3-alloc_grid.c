#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: input width
 * @height: heigt input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **you;
	int q;
	int w;

	if (width <= 0 || height <= 0)
		return (NULL);
	you = malloc(sizeof(int *) * height);

	if (you == NULL)
		return (NULL);
	for (q = 0; q < height; q++)
	{
		you[q] = malloc(sizeof(int) * width);
		if (you[q] == NULL)
		{
			for (; q >= 0; q--)
				free(you[q]);
			free(you);
			return (NULL);
		}
	}

	for (q = 0; q < height; q++)
	{
		for (w = 0; w < width; w++)
			you[q][w] = 0;
	}
	return (you);
}
