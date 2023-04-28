#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}

