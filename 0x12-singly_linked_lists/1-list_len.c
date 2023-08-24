#include <stdlib.h>
#include "lists.h"

/**
 * custom_list_length - returns the number of elements in a custom linked list
 * @head: pointer to the custom_node_t list
 *
 * Return: number of elements in the custom linked list
 */
size_t custom_list_length(const custom_node_t *head)
{
    size_t element_count = 0;

    while (head)
    {
        element_count++;
        head = head->next;
    }

    return element_count;
}
