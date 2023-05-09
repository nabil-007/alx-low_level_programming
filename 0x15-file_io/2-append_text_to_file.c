#include"main.h"
/**
 * append_text_to_file - function that append text at the end of file
 * @filename: the file
 * @text_content: the content of the file
 *
 * Return: 1 on succes, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	ssize_t fw;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		fw = write(fd, text_content, i);
		if (fw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
