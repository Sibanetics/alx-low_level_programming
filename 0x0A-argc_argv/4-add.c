#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a positive number
 * @s: the string to check
 *
 * Return: 1 if the string is a postive number, 0 otherwise
 */
int is_number(char *s)
{
	if (*s == '\0')
		return (0);

	while (*s != '\0')
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}

	return (1);
}

/**
 * main - entry point
 * @argc: the number of arguments passed
 * @argv: an array of pointers to the arguements
 *
 * Return: 0 if the program ran successfully, 1 otherwise
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
