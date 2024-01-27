#include "main.h"

/**
 * print_c - output a char
 * @list: variadic list
 * @f: PTR to flags
 * Return: len (char) printed
 */
int print_c(va_list list, flags_types *f)
{
	(void) f;
	_putchar(va_arg(list, int));
	return (1);
}