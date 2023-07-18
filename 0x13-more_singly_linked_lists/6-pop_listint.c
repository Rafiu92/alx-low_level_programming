#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: Pointer to the list
 *
 * Return: 0 || Return head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;


	if (head == NULL)
		return (0);
	h = *head;
	*head = h->next;
	n = h->n;
	free(h);
	return (n);
}
