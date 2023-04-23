#include "main.h"

/**
 * print_line - Prints a straight line of underscores
 * @n: Number of times the character _ should be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}