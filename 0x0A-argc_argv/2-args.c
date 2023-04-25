#include "main.h"

/**
 * main - prints all arhuments it recieves
 * @argc: number of arguments passed
 * @argv: pointer to array of size argc
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
