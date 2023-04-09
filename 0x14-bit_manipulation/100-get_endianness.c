#include "main.h"
#include <stdio.h>

/**
 * Get the endianness by writing a function called get_endianness.
 * Concept: int get_endianness(void).
 * Recap: 1, if the architecture is little endian, and 0 if the architecture is big endian.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
