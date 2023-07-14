#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - copy file_from to file_to
 * @argc: arguments number
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fread, fwrite, r, m, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fread = open(argv[1], O_RDONLY);
	if (fread < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fwrite = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fread, buf, BUFSIZ)) > 0)
	{
		if (fwrite < 0 || write(fwrite, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fread);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = close(fread);
	n = close(fwrite);
	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fread);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fwrite);
		exit(100);
	}
	return (0);
}
