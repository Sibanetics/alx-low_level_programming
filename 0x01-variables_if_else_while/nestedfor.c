#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
/*The work begins here*/
{
	for (int i = 0; i < 11; i++)
	{
		for (int k = i; k >= 0; k--)
		{
			printf("%d ", k);
		}
	printf("\n");
	}
	return (0);
}
