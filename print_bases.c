#include "main.h"

/**
 * print_h - hexadecimal
 * @list: variadic list
 * @f: PTR FLAG
 * Return: char nums
 */
int print_h(va_list list, flags_types *f)
{
	unsigned int number = va_arg(list, unsigned int);
	char *s = convertFunc(number, 16, 1);
	int cnt = 0;

	if (s[0] != '0' && f->h == 1)
	{
		cnt += _puts("0x");
	}
	cnt += _puts(s);

	return (cnt);
}

/**
 * print_h2 - hexadecimal
 * @list: variadic list
 * @f: PTR FLAG
 * Return: char nums
 */

int print_h2(va_list list, flags_types *f)
{
	unsigned int number = va_arg(list, unsigned int);

	char *s = convertFunc(number, 16, 0);
	int cnt = 0;

	if (s[0] != '0' && f->h == 1)
	{
		cnt += _puts("0X");
	}
	cnt += _puts(s);

	return (cnt);
}

/**
 * print_bin - binary
 * @list: variadic list
 * @f: PTR FLAG
 * Return: char nums
 */

int print_bin(va_list list, flags_types *f)
{
	unsigned int number = va_arg(list, unsigned int);
	char *s = convertFunc(number, 2, 0);
	(void)f;

	return (_puts(s));
}

/**
 * print_oct - octal
 * @list: variadic list
 * @f: PTR FLAG
 * Return: char nums
 */

int print_oct(va_list list, flags_types *f)
{
	unsigned int number = va_arg(list, unsigned int);
	char *s = convertFunc(number, 8, 0);
	int cnt = 0;

	if (s[0] != '0' && f->h == 1)
	{
		cnt += _putchar('0');
	}
	cnt += _puts(s);

	return (cnt);
}

