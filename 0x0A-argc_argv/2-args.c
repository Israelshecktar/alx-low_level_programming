#include <stdio.h>
#include <stdlib.h>

/**
* main - prints argument vector followed by a new line
* @argc: argument count
* @argv: argument vector
*
* Return: o
*/

int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
