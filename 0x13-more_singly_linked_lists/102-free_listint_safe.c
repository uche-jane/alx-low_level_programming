#include "lists.h"

/**
 * free_listint_safe - Safely frees a linked list with a loop.
 * @h: Double pointer to the head node of the linked list.
 *
 * Return: Size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *slow, *fast, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (fast != NULL && fast < fast->next)
	{
		tmp = fast->next;
		free(slow);
		count++;

		slow = tmp;
		fast = tmp->next;
	}

	free(slow);
	count++;
	*h = NULL;

	return (count);
}

