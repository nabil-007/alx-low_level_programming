#include<stdlib.h>
/**
 * free_grid - function that frees two dimensional grid
 * @grid: ayyar of pointers
 * @height: the height of the pointer
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		free(grid);
	}
	for (i = 0; i <= height; i++)
	{
		free(grid);
	}

}
