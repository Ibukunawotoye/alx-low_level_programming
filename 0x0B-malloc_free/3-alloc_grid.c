#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **ch;
	int y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	ch = malloc(sizeof(int *) * height);

	if (ch == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		ch[y] = malloc(sizeof(int) * width);

		if (ch[y] == NULL)
		{
			for (; y >= 0; y--)
				free(ch[y]);

			free(ch);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (y = 0; z < width; y++)
			ch[y][z] = 0;
	}

	return (ch);
}
