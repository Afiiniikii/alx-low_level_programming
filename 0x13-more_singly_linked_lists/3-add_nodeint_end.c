#include "lists.h"

/**
* add_nodeint_end - adds  node to the end of linked list
* @head: pointer to head of the list
* @n: number of nodes
* Return: address of  new element, or NULL if it fais
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *point = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (point != NULL)
	{
		while (point->next != NULL)
			point = point->next;
		point->next = new;
	}
	else
		*head = new;
	return (new);
}
