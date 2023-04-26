#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: argument to be counted
 * @argv: same as the above
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}