#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - Entry point*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	scanf("%d\n", &n);

	if (n > 0)
	{
		printf("%d is postive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
