#include "main.h"
#include <stdio.h>
/**
 * * @filename: The read_textfile function reads a text file and prints it to standard output. file 
 * @characters: number of letters to peruse and print
 *
 * Return: number of letters read and printed, zero in the event of failure
 */
{
	int fd, n_read, n_write;
	char *s;

	if (filename == NULL)
		return (0);
	s = malloc(letters * sizeof(char) + 1);
	if (!s)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(s);
		return (0);
	}
	n_read = read(fd, s, letters);
	if (n_read == -1)
	{
		free(s);
		return (0);
	}
}	
