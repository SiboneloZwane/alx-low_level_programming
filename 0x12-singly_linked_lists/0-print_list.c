#include <stdio.h>
#include "custom_lists.h"  // Update this to match your header file name

/**
 * print_custom_list - prints all the elements of a custom linked list
 * @head: pointer to the custom_node_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_custom_list(const custom_node_t *head)
{
    size_t count = 0;

    while (head)
    {
        if (!head->data)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", head->length, head->data);
        head = head->next;
        count++;
    }

    return count;
}
