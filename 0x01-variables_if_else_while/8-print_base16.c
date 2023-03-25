#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hex;

	hex = '0';

	while (hex <= 'f')
	{
		putchar(hex);
		hex++;

		if (hex > '9' && hex < 'a')
		{
			hex = 'a';
		}
	}
	putchar('\n');
	return (0);
}
