#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adding a new node
 *
 * @head: double pointer to the start of the linked list
 *
 * @n: new valuee
 *
 * Return: pointer to the new node, or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
