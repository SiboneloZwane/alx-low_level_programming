#include "lists.h"

/**
 * get_dnodeint_at_index - nth node
 *
 * @head: pointer 
 *
 * @index: int
 *
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == cnt)
		{
			return (head);
		}
		cnt++;
		head = head->next;
	}
	return (NULL);
}
