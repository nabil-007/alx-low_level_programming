#include"main.h"
/**
 * read_textfile - function to read a text file and print ot
 * @filename: the file to read
 * @letters: the letters
 *
 * Return: 0 as failure, the size of the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t n_read = 0;
	size_t n_write = 0;
	char *baff;
	int fd = 0;

	if (filename == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	baff = malloc(sizeof(char) * (letters + 1));
	if (baff == NULL)
		return (0);
	n_read = read(fd, baff, letters);
	if (n_read == 0)
	{
		free(baff);
		close(fd);
		return (0);
	}
	baff[n_read] = '\0';
	n_write = write(STDOUT_FILENO, baff, letters);
	if (n_write == 0)
	{
		free(baff);
		close(fd);
		return (0);
	}
	close(fd);
	return (n_read);
}
