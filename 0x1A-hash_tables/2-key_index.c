#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value pair
 * @key: key to get the index of it
 * @size: size of the array
 *
 * Return: The index of the key.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
