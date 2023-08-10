#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - this function allocates memory using malloc
 * @b: the integer to be allocated
 * Return: Null or pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

		ptr = malloc(b);

		if (ptr == NULL)
		exit(98);

		return (ptr);
}
