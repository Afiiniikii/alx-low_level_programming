#include "lists.h"

/**
 * add_nodeint - Adds new node to the beginning of a listint_t list
 *
 * @head: Points to a pointer to the first node of the list
 * @n: Value set in the new node
 *
 * Return: address of a new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	/* Set the value of the new node */
	new->n = n;
	/* Set the next pointer of the new node to the current head */
	new->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new;
	/* Return the address of the new node */
	return (new);
}
