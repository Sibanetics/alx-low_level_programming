#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0, k;

	while(i < 11)
	{
		k = i - 1;
		printf("%d ", i);
		i++;
		
		while(k >= 0)
		{
			printf("%i ", k);
			k--;
		}

		printf("\n");

	}
		return (0);
}
