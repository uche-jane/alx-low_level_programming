#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head, *temp = NULL;
    size_t count = 0;

    while (current != NULL)
    {
        count++;
        printf("[%p] %d\n", (void *) current, current->n);
        if (current >= current->next)
        {
            temp = current->next;
            printf("-> [%p] %d\n", (void *) temp, temp->n);
            break;
        }
        current = current->next;
    }

    if (temp != NULL)
    {
        count++;
        printf("[%p] %d\n", (void *) temp, temp->n);
        while (temp->next != NULL && temp->next > temp)
        {
            count++;
            temp = temp->next;
            printf("[%p] %d\n", (void *) temp, temp->n);
        }
        exit(98);
    }

    return (count);
}

