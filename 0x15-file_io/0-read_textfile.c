#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* read_textfile -  function that reads a text file and prints it
* @filename: pointer to the file name
* @letters: number of letters it should read and print
* Return: Actual number of letters or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buffer;
	ssize_t n;
	ssize_t wrd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
			return (0);

	buffer = malloc(sizeof(char *) * letters);
	n = read(fd, buffer, letters);

	wrd = write(STDOUT_FILENO, buffer, n);

	free(buffer);
	close(fd);

	return (wrd);

}
