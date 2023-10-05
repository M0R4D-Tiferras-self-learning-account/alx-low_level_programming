#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of the array will be handled
 *
 * @c: char will be handled
 *
 * Return: pointer to the array, or NULL if it's false
*/

char	*create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);

	memset(array, c, size);

	return (array);
}
