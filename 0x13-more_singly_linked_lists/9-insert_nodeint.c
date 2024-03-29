#include "lists.h"

/**
 * insert_nodeint_at_index - Inserting new node to a listint_t
 *                           list at a given position
 * @head: pointer to address of
 *        head of the listint_t list
 * @idx: index of listint_t list where the new
 *       node should be added - indices start at 0
 * @n: integer for the new node to contain
 *
 * Return: If function fails - NULL
 *         Otherwise - the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *j = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = j;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (j == NULL || j->next == NULL)
			return (NULL);

		j = j->next;
	}

	new->next = j->next;
	j->next = new;

	return (new);
}
