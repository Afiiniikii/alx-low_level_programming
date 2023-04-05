#include "lists.h"

/**
 * get_nodeint_at_index - Returing nth node of a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * @index: index of node to be returned (starting at 0)
 *
 * Return:pointer to nth node of the listint_t list
 *         If the node does not exist, returns NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	/* i= variable for node */
	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
