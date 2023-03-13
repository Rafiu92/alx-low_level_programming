#include <stdlib.h>
#include "MAIN_H"

/**
 * *create_array - create an array of char,
 * and initialized it with a specific char
 * @size: size of the array to create
 * @c: char to initialized the array c
 *
 * Return: pointer to the array (success), NULL (error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
