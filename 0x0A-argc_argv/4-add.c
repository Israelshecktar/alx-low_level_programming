#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: string with arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	(void)argv;
	sum = 0;
	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (!(isdigit(argv[a][b])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
	}
	printf("%i\n", sum);
	return (0);
}
