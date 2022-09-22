#include "main.h"

/**
 * _strcmp - Compares pointers to two strings
 * @s1: A pointer to be compared to the first string
 * @s2: A pointer to be compared to the second string
 *
 * Return: if str1 < str2, the negative difference of the 1st unmatched char
 *        if str1 == str2, 0
 *        if str1 > str2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	 return (*s1 - *s2);
}
