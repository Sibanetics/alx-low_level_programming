#include <stdlib.h>
/**
 * create_array - Creating arrays
 * @size: size used
 * @c: cahacraer
 *
 * Return: Always 23 run
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
