#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node.
 * @head: A pointer to dlistint_t list.
 * @n: The int for the new node to contain.
 *
 * Return: If the function fails - NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *lst;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	lst = *head;
	while (lst->next != NULL)
		lst = lst->next;
	lst->next = new;
	new->prev = lst;

	return (new);
}
