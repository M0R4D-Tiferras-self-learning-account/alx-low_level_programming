#include "main.h"

/**
 * flip_bits - bitwising num to another
 *
 * @n: 1rst num
 *
 * @m: 2sd num
 *
 * Return: bytes of bit
*/

unsigned int	flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
