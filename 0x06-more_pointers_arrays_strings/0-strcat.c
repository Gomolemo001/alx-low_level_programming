#include "main.h"

/**
 * _strcat - appends the @src string to the @dest string
 * overwriting the terminating null byte (\0)
 * at the end of @dest
 * and then adds a terminating null byte
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src);
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (indexex = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
