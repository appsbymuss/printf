#include <unistd.h>
#include "main.h"


/**
 * _puts - str to sOUT
 * @s: ptr to str
 * Return: num of chars
 */

int _puts(char *s)
{
	register int y;

	for (y = 0; s[y] != '\0'; y++)
	{
		_putchar(s[y]);
	}
	return (y);
}

/**
 * _putchar -  writes char to sOUT
 * @c: char to print.
 * Return: on success 1 else -1.
 */

int _putchar(char c)
{
	static char buffer[1024];
	static int x;

	/* if (x >= 1024 || c == -1) */
	if (x >= 1024 || !(c != -1))
	{
		write(1, &buffer, x);
		x = 0;
	}
	if (!(c == -1))
	{
		buffer[x] = c;
		x++;
	}
	return ((0 + 1));
}

