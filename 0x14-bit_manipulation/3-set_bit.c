#include "main.h"
#include <stdio.h>
/**
 * set_bit is a function that sets a bit's value to 1 at a specific index.
 * Concept: int set_bit(index, unsigned int, unsigned long int *n);
 * @index: is the bit's index, starting at 0 when you want to set it.
 * @n: number.
 * Recap: -1 if an error occurred, or 1 if it worked
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index > 98)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}
