#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function concatenates all the arguments of the program
 * @ac: first integher to be concatenated
 * @av: second integer to be concatenated
 * Return: NULL otherwise a pointer
 */

char *argstostr(int ac, char **av)
{
	int b;

	if (ac == 0 || av == NULL)

	{
		return (NULL);
	}
	int length = 0;

	for (b = 0; b < ac; b++)
	{
		length += strlen(av[b]) + 1;
	}
	char *output;

	char *output = (char *)malloc(length * sizeof(char));

	if (output == NULL)

	{
		return (NULL);
	}
	int actual_pointer = 0;

	for (b = 0; b < ac; b++)
	{
		strcpy(output + actual_pointer, av[b]);
		actual_pointer += strlen(av[b]);
		output[actual_pointer++] = '\n';
	}
	output[length - 1] = '\0';

	return (output);
}

