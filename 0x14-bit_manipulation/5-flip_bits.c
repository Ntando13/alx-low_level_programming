#include "main.h"
#include <stdio.h>

/**
 * flip_bits: Create a function that returns the number of bits that must be flipped in order to change numbers.
 * Concept: flip_bits(unsigned long int n, unsigned long int m) is an unsigned int
 * The % and / operators are not permitted. * @n: 1. Enter a number.
 * @m: 2. Enter a number.
 * Recap: Input numbers for the number of flips.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int flip = 0, comp, comp1;

	while (!(n == 0 && m == 0))
	{
		comp = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comp != comp1)
			flip += 1;
	}
	return (flip);
}
