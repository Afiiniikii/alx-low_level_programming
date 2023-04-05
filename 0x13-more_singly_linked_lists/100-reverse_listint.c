#include "lists.h"

/**
 * reverse_listint - Reversing  listint_t list
 * @head: pointer to address of
 *        head of list_t list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}

	(*head)->next = prev;

	return (*head);
}
