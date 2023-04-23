#include "main.h"
#include <stdio.h>

/**
 * _sqrt_check - checks for the square root of c
 * @n: integer to be squared
 * @i: integer value to check as a square root
 *
 * Return: the natural square root of c
 */
int _sqrt_check(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i < n)
		return (_sqrt_check(n, i + 1));

	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to be squared
 * Return: the natural square root of n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_check(n, 1));
}
