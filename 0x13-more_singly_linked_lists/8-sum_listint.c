#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data(n) of a linked list.
 * @head: pointer to the list
 *
 * Return: 0 Always
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
