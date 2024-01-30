#include "main.h"

/**
 * print_pcnt - to print a "%"
 * @list: variadic list
 * @f: PTR to flags
 * Return: integer
 */
int print_pcnt(va_list list, flags_types *f)
{
	(void)list;
	(void)f;
	return (_putchar('%'));
}
