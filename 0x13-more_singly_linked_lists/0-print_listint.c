#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all elements of a linked list of type listint_t.
 * @h: A pointer to the head of the linked list.
 *
 * Return:return the  number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}

