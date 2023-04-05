#include "lists.h"

/**
* listint_len - this returns the numbers of elements
* @h: pointer head
* Return: number of elements in a list
*/

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	/* Return the final count */
	return (node);
}
