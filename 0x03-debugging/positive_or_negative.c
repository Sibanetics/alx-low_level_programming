#include "main.h"

/**
 * positve_or_negative - this function checks for
 * positive or negative numbers
 *
 * @i: the number to be cjecked
 * Return: Always 0.
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive\n", i);
}
