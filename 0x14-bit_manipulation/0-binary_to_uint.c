#include "main.h"
#include "stddef.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 characters
 *
 * Return: The converted number as an unsigned int, or 0 on error.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b - '0');
		b++;
	}

	return (num);
}

