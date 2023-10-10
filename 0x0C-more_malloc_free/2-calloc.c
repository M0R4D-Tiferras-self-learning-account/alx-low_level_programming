#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements in array
 *
 * @size: size of elements
 *
 * Return: pointer to allocated in the memory
*/

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		result[i] = 0;

	return (result);
}
