#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - this function allocates memory using malloc
 * @b: the integer to be allocated
 * Return: Null or pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "failed to memory allocation\n");
		exit (98);
	}
		return (ptr);
}
