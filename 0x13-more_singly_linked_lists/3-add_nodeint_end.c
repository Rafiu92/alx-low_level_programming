#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node
 * at the end of a list.
 * @head: pointer to a pointer
 * @n: constant integer
 *
 * Return: address of new element || NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = NULL;
	if (*head == NULL)
	{
		*head = h;
		return (h);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = h;
	return (h);
}
