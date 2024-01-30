#include "main.h"

/**
 * print_add - address to print
 * @list: variadic list
 * @f: PTR
 * Return: char nums
 */

int print_add(va_list list, flags_types *f)
{
	char *s;
	unsigned long int ptr = va_arg(list, unsigned long int);
	register int cnt = 0;
	(void) f;

	if (!ptr)
	{
		return (_puts("(nil)"));
	}

	s = convertFunc(ptr, 16, 1);
	cnt += _puts("0x");
	cnt += _puts(s);

	return (cnt);
}
