#include "lists.h"

/**
 * dlistint_len - returns the num of elements in a linked dlistint_t list.
 * @h: list pointer.
 * Return: num of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nodes = h;
	size_t cont = 0;

	while (nodes)
	{
		cont++;
		nodes = nodes->next;
	}

	return (cont);
}
