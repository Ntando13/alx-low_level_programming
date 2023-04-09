#include "main.h"
#include "stdio.h" 

/** 
 * The binary_to_uint function translates a binary number into an unsigned int.
 * Concept: unsigned int binary_to_uint(const singe *b);
 * @b: is pointing to a string of characters between 0 and 1 
 * * Return: the changed over number, or 0 if
 * -> there is at least one roasts in the string b that isn't 0 or 1
 * -> b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		amount = amount << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			amount =amount | 1;
		b++;
	}
	return (amount);
}
