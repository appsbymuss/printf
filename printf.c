#include "main.h"

/**
 * _printf - our own Standard Print function
 * @format: format string with flags (%c, %s...)
 *
 * Description: it would call the function get "print"
 * Return: format len
 */


int _printf(const char *format, ...)
{
	int (*f)(va_list, flags_types*);
	const char *pp;
	va_list args;
	flags_types flags = {0, 0, 0};

	register int cnt = 0;

	va_start(args, format);
	if ((format[0] == '%' && !format[1]) || !format)
		return ((0 - 1));

	if (!format[2] && format[0] == '%' && format[1] == ' ')
		return ((0 - 1));

	for (pp = format; *pp; pp++)
	{
		if (*pp == '%')
		{
			pp++;
			if (*pp == '%')
			{
				cnt += _putchar('%');
				continue;
			}
			while (get_flag(*pp, &flags))
				pp++;
			f = get_print(*pp);
			cnt += (f) ? f(args, &flags) : _printf("%%%c", *pp);
		}
		else
		{
			cnt += _putchar(*pp);
		}
	}
	/* Phase includes Putchar */
	_putchar((0 - 1));
	va_end(args);

	return (cnt);
}

