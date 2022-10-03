#include "main.h"

/**
 * create_array - array to print a string
 * @size: number elements array
 * @c: char
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

/*Defining values with malloc*/
buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
	return (NULL);
}
else
{
	position = 0;
	/*while for array*/
	while (position < size)
	{
		*(buffer + position) = c;
		position++;
	}

	return (buffer);
}
