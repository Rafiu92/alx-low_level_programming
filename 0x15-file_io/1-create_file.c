#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file -create a file and write text
 *               in it
 *
 * @filename : name of the file to create
 * @text_content : chars to put in to file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytesWritten = write(fd, text_content, strlen(text_content));
		if (bytesWritten == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
