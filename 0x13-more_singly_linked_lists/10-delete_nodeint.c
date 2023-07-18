#include "lists.h"

/**
 * delete_nodeint_at_index - function that delets the node
 * at index of a linked list
 * @head: Pointer to list
 * @index: index of the node that should be deleted
 *
 * Return: 1 || -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int idx;


	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;
	for (idx = 0; idx < index - 1; idx++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	temp->next = (*next).next;
	free(next);
	return (1);

}
