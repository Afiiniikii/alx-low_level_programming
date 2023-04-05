#include "lists.h"

/**
 * pop_listint - Deletes  head node of a listint_t linked list, and
 *               returns  head node's data (n)
 * @head: pointer to a pointer to head of the listint_t list
 *
 * Return: data (n) of the head node that was deleted
 *         If the list is empty, returns 0
 */

int pop_listint(listint_t **head)
{
	/* declare functions */
	int space;
	listint_t *del;
	/*run checks*/
	if (*head == NULL)
		return (0);
	/* store data in del*/
	del = *head;
	/* free head node*/
	space = (*head)->n;

	*head = (*head)->next;

	free(del);

	return (space);
}
