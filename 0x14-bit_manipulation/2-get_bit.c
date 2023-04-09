#include "main.h"
#include <stdio.h>
/**
 * get_bit: Create a function that returns the value of a bit at a
 * * given index by typing it into the code.
 * Concept: int get_bit(unsigned long int n, unsigned int file);
 * @index: is the index of the bit you want to get, starting at 0 * @n: value of a bit in the index.
 * Recap: the value of the bit at index or -1 in the event of an error 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
