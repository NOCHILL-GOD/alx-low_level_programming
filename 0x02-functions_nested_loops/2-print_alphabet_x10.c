#include "holberton.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase,
 *                       followed by a new line.
 */
void print_alphabet_x10(void);
{
	int i, j;

	for (i = 0; 1 < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
