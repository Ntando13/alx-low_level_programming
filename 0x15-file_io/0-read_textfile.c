#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * * @filename: The read_textfile function reads a text file and prints it to standard output. file 
 * @characters: number of letters to peruse and print
 *
 * Return: number of letters read and printed, zero in the event of failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
