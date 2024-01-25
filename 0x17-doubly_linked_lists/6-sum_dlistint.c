#include "lists.h"

/**
 * sum_dlistint - Sums all dlistint_t list data.
 * @head: head of the dlistint_t list.
 *
 * Return: The sum of data.
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
