#include <stdio.h>
#include <stdlib.h>

/**
* main - printing the value of argv
* @argc: argument count
* @argv: argument vector pointer to string
*
* Return: 0
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
