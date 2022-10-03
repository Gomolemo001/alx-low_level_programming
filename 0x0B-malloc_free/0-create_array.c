#include "main.h"
#include <stdlib.h>

/**
 * create_array - array to print a string
 * @size: number elements array
 * @c: char to initialize array with
 * Return: Null if it fails or
 *	pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	/* check if mallox was successful */

	if (arry == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

