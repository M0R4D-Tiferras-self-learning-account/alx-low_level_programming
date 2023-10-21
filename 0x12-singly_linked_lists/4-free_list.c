#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 *
 * @head: first node
 *
 * Return: void
*/

void	free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *temp = current;

		current = current->next;
		free(temp->str);
		free(temp);
	}
	head = NULL;
}
