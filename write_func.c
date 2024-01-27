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
