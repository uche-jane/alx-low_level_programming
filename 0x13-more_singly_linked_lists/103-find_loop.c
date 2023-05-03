#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
    listint_t *orange = head;
    listint_t *apple = head;

    while (apple && apple->next)
    {
        orange = orange->next;
        apple = apple->next->next;

        if (orange == apple)
        {
            orange = head;
            while (orange != apple)
            {
                orange = orange->next;
                apple = apple->next;
            }
            return apple;
        }
    }

    return NULL;
}

