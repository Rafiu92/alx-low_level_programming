#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node
 * @head: pointer to the list
 * @index: index to iterate through with
 *
 * Return: NULL if node don't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (NULL);
}
