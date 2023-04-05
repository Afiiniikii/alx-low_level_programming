#include "lists.h"

/**
* free_listint2 - freeing linked list
* @head: points to head of a list
* return: null
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
