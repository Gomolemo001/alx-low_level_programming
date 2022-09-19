#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - prints a functions that reverses a string
 * @s: string in reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
