#include <stdio.h>
#include <stdlib.h>
#define TAKE(argv) (void)(argv)

/**
* main - prints argument
* @argc: argument count
* @argv: ununsed attribute
*
* Return: 0
*/

int  main(int argc, char **argv)
{
	TAKE(argv);

	printf("%i\n", argc - 1);
	return (0);
}
