#include <stdio.h>
#include "main.h"

/**
 * puts_half - print half of a string
 * @str: the string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	fot (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*)str + i));
	putchar(10);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
