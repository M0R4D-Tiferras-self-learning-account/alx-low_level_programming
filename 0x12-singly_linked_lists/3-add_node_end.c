#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: first node
 *
 * @str: string to be handled
 *
 * Return: new element or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *strCopy = strdup(str);
	list_t *new_node;
	unsigned int len;

	if (!strCopy || !head)
	{
		free(strCopy);
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	new_node->str = strCopy;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
