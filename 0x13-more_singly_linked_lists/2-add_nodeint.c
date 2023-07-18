#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a list.
 * @n: constant integer
 * @head: pointer to a pointer
 * Return: address of new element || NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;


	if (head == NULL)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
