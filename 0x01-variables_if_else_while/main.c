#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0, j;

	while(i < 5)
	{
		j = 0;
		while(j < 3)
		{
			printf("2 ");
			j++;
		}

		printf("\n");
		i++;
	}


	return (0);
}
