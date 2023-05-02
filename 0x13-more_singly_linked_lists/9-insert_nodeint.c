#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *temp_node;
    unsigned int i;

    if (!head)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    temp_node = *head;
    for (i = 0; i < idx - 1 && temp_node; i++)
        temp_node = temp_node->next;

    if (!temp_node)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = temp_node->next;
    temp_node->next = new_node;

    return (new_node);
}

