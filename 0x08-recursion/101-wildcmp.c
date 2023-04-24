#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they can be
 * considered identical, otherwise returns 0. The second string can
 * contain the character '*'.
 *
 * @s1: First string to compare
 * @s2: Second string to compare (may contain wildcard '*')
 *
 * Return: 1 if strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*s1 == '\0' && *(s2 + 1) == '\0')
			return (1);
		if (*s1 == '\0' || *(s2 + 1) == '\0')
			return (0);

		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		if (*s1 == *(s2 + 1))
			return (wildcmp(s1 + 1, s2 + 2));

		return (wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
