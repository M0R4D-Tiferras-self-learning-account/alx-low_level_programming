#include "main.h"

/**
 * rev_string - reversing a str
 *
 * @s: str will be reversed
 *
 * Return: void
*/

void	rev_string(char *s)
{
	int	start;
	int	end;

	start = 0;
	end = 0;

	while (s[end] != '\0')
	{
		end++;
	}
	end = end - 1;
	char    temp;

	while (end > start)
	{
		temp = s[end];
		s[end] = s[start];
		s[start] = temp;

		start++;
		end--;
	}

}
