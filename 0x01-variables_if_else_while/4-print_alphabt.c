#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Ct = 'a';

	while (Ct <= 'z')
	{
		if (Ct != 'q' && Ct != 'e')
		{
			putchar(Ct);
		}
		Ct++;
	}
	putchar('\n');
	return (0);
}
