#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - contains a copy of string
 * @str: this is the string to be returned
 * Return: NULL otherwise replaced_str
 */
char *_strdup(char *str)
{
	size_t len;
        char *replace_str;
	
	if (str == NULL)
	{
		return (NULL);
	}
	
	len = strlen(str);
	replace_str = (char *)malloc(sizeof(char) * (len + 1));

	if (replace_str == NULL)
	{
		return (NULL);
	}
	strcpy(replace_str, str);
	return (replace_str);
}
