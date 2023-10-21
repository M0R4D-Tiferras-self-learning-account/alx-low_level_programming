#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node -  adds a new node at the beginning of a list_t list.
  *
  * @head: first node
  *
  * @str: The string to be handled
  *
  * Return: new list or NULL
*/

list_t	*add_node(list_t **head, const char *str)
{
	char *strCopy = strdup(str);
	list_t *new;
	unsigned int len;

	if (!strCopy || !head)
		return (NULL);

	new = malloc(sizeof(list_t));
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	new->str = strCopy;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
