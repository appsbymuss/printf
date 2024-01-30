#include "main.h"

/**
 * convertFunc - num to base "B"
 * @number: number
 * @b: base
 * @lc: lower
 * Return: PTR
 */

char *convertFunc(unsigned long int number, int b, int lc)
{
	static char *repLoop;
	static char buff[50];
	char *p;

	repLoop = (lc) ? "0123456789abcdef" : "0123456789ABCDEF";
	p = &buff[49];
	*p = '\0';
	do {
		*--p = repLoop[number % b];
		number /= b;
	} while (number != 0);

	return (p);
}

