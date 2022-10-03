#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory containing a copy of the string
 * passed
 * @str: Pointer to the string being duplicated.
 *
 * Return: NULL if str is NULL
 * pointer to duplicated string on success
 * NULL if memory is sufficient
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	if (str == NULL) /* Check if str is null */
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL) /* check if malloc was successful */
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
