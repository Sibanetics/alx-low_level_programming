#include "main.h"

/**
 * _puts - function that checks a string
 * @str: string being checked
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
