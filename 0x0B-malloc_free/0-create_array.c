#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Function creates an array of unsigned integer and character
 * @size: the integer to be created
 * @c: the character to be created
 *
 * Return: NULL otherwise array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)

	{
		return (NULL);
	}
	char *array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)

	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

