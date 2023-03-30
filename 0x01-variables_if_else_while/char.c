#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ASCII;

	printf("Please enter a charcter: ");
	scanf("%c", &ASCII);
	printf("%i\n", ASCII);

	int integer;
	
	printf("Please enter an integer between 0 - 127: \n");
	scanf("%d", &integer);
	printf("%c\n", integer);

	char mathz = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n", mathz, mathz);
		
	return (0);
}
