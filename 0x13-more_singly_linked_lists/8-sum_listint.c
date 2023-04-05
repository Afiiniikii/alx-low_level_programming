#include "lists.h"

/**
* sum_listint - calculating the sum of all data of a
* linked list
* @head: pointer to head of the linked list
* Return: 0 if list is empty
* else return sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
