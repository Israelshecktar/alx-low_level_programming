#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatonates two strings
 * @s1: the first string be concatonated
 * @s2: the second string to be concatonated
 * Return: NULL otherwise empty string
 */
char *str_concat(char *s1, char *s2)
{
	size_t emp1;
	size_t emp2;
	char *output;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	emp1 = strlen(s1);
	emp2 = strlen(s2);

	output = (char *)malloc((emp1 + emp2 + 1) * sizeof(char));

	if (output == NULL)
	{
		return (NULL);
	}
	strcpy(output, s1);
	strcat(output, s2);
	return (output);
	}
