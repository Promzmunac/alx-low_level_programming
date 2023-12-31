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
	int **mee;
	int t, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (t = 0; t < height; t++)
	{
		mee[t] = malloc(sizeof(int) * width);

		if (mee[t] == NULL)
		{
			for (; t >= 0; t--)
				free(mee[t]);

			free(mee);
			return (NULL);
		}
	}

	for (t = 0; t < height; t++)
	{
		for (y = 0; y < width; y++)
			mee[t][y] = 0;
	}

	return (mee);
}
