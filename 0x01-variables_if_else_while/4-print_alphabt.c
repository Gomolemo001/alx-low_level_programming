#include <stdio.h>
/**
 * mainn - Entry point
 *
 * Return: 0
 */
int main(void)

{
	char alphabet;

	fot (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;

		else if (alphabet == 'e')
			continue;

		putchar (alphabet);
	}

	putchar ('\n');

	return (0);
}
