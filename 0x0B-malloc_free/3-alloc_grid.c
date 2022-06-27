#include "main.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * each element of the grid initialized to 0
 * @width: width of the tab
 * @height: height of the tab
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **tab = NULL;
	int i = 0, w = 0, h = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(sizeof(int *) * height);
	if (tab == NULL)
	{
		free(tab);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
	}

	while (w < width)
	{
		while (h < height)
		{
			tab[h][w] = 0;
			h++;
		}
		w++;
		h = 0;
	}

	return (tab);
}
