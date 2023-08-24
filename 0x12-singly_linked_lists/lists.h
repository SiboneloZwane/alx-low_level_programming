#ifndef LISTS_H
#define LISTS_H
/**
 * Custom singly linked list node structure
 * struct custom_node - singly linked list node
 * @data: custom data - (malloc'ed string)
 * @length: length of the data string
 * @next: points to the next node
 *
 * Description: Custom singly linked list node structure
 */
typedef struct custom_node
{
    char *data;
    unsigned int length;
    struct custom_node *next;
} custom_node_t;

size_t print_custom_list(const custom_node_t *head);
size_t custom_list_length(const custom_node_t *head);
custom_node_t *add_custom_node(custom_node_t **head, const char *data);
custom_node_t *add_custom_node_end(custom_node_t **head, const char *data);
void free_custom_list(custom_node_t *head);

#endif
