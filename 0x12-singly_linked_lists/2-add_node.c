#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_custom_node - adds a new node at the beginning of a custom linked list
 * @head: double pointer to the custom_node_t list
 * @data: new data string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
custom_node_t *add_custom_node(custom_node_t **head, const char *data)
{
    custom_node_t *new_node;
    unsigned int data_length = 0;

    while (data[data_length])
        data_length++;

    new_node = malloc(sizeof(custom_node_t));
    if (!new_node)
        return NULL;

    new_node->data = strdup(data);
    new_node->length = data_length;
    new_node->next = (*head);
    (*head) = new_node;

    return (*head);
}
