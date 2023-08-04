#include <stdio.h>
#include <stdlib.h>

/**
* main - print multiplication of arguments
* @argc: argument count
* @argv: argument vector
*
* Return: 0
*/

int main(int argc, char **argv)
{
	int a, b, mul;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (argc == 3)
	{
		mul = a * b;
		printf("%i\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
