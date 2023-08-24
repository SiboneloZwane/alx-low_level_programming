#include <stdlib.h>
#include "lists.h"

/**
 * free_custom_list - frees a custom linked list
 * @head: custom_node_t list to be freed
 */
void free_custom_list(custom_node_t *head)
{
    custom_node_t *temp;

    while (head)
    {
        temp = head->next;
        free(head->data);
        free(head);
        head = temp;
    }
}
