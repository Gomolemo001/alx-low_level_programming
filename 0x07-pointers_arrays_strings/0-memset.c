#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *         pointed to by @s with the ocnstant byte @c
 * @s: A poingter to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s.
 */
{
	while (n)
	{
		s[n - 1] = b;
		n++;
	}
	return (s);
}
