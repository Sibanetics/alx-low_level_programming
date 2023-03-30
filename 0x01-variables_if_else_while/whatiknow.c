#include <stdio.h>

/**
 * main - running a test to determine the address of the variable and pointer
 *
 * Return: 0.
 */
int main(void)
{
	int n;
	int *p;

	p = &n;

	printf("The address of variable 'n' is %p\n", &n);
	printf("While the address of the pointer of variable 'p' is %p\n", p);
	return (0);
}
