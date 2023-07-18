#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked list.
 * @h: pointer to the elements
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
