#include "main.h"
#include <stdio.h>
/**
 * Write a function that prints the binary representation of a number.
 * Prototype: void print_binary(unsigned long int n);
 * Format: see example
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar ('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
