#include "main.h"
/**
 * create_file - fuinction that creats file
 * @filename: the file
 * @text_content: the file content
 *
 * Return: 1 on succes,-1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t fw;
	int i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		fw = write(fd, text_content, i - 1);
		if (fw == -1)
			return (-1);
	}
	return (1);
}
