#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_custom_node_end - adds a new node at the end of a custom linked list
 * @head: double pointer to the custom_node_t list
 * @data: data to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
custom_node_t *add_custom_node_end(custom_node_t **head, const char *data)
{
    custom_node_t *new_node;
    custom_node_t *temp = *head;
    unsigned int data_length = 0;

    while (data[data_length])
        data_length++;

    new_node = malloc(sizeof(custom_node_t));
    if (!new_node)
        return NULL;

    new_node->data = strdup(data);
    new_node->length = data_length;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return new_node;
    }

    while (temp->next)
        temp = temp->next;

    temp->next = new_node;

    return new_node;
}
