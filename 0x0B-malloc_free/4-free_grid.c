#include<stdlib.h>
/**
 * free_grid - function that frees two dimensional grid
 * @grid: ayyar of pointers
 * @height: the height of the pointer
 */
void free_grid(int **grid, __attribute__((unused))int height)
{
	free(grid);
}
