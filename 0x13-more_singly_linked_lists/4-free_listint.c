#include "lists.h"

/**
 * free_listint - Freeing a listint_t list
 * @head: pointer to head of the listint_t list to be freed
 *
 * Return: None
 */

void free_listint(listint_t *head)
{
	listint_t *h = head;
	listint_t *temp;

	while (h != NULL)
	{
		temp = h;
		h = h->next;
		free(temp);
	}
}
