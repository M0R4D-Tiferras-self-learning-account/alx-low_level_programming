#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: is min of the arr
 *
 * @max: is max of the arr
 *
 * Return: pointer to array
*/

int	*array_range(int min, int max)
{
	int *result;
	int i;

	if (min > max)
		return (NULL);

	result = malloc(sizeof(int) * (max - min + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		result[i] = min + i;

	return (result);
}
