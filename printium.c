#include "main.h"

/**
 * print_nonprint - Non-ASCII
 * @list: vardiadic list
 * @f: PTR
 * Return: char length
 */
int print_nonprint(va_list list, flags_types *f)
{
	int x, cnt = 0;
	char *r;
	char *str = va_arg(list, char *);

	(void)f;
	if (!(str))
		return (_puts("(null)"));

	for (x = 0; str[x]; x++)
	{
		if ((str[x] >= 127 || str[x] < 32) && str[x] > 0)
		{
			_puts("\\x");
			cnt += 2;
			r = convertFunc(str[x], 16, 0);
			if (!r[1])
			{
				cnt += _putchar((char) 48);
			}
			cnt += _puts(r);
		}
		else
		{
			cnt += _putchar(str[x]);
		}
	}

	return (cnt);
}

/**
 * print_rv - print a reversed string
 * @list: vardiadic list
 * @f: PTR
 * Return: char length
 */
int print_rv(va_list list, flags_types *f)
{
	int jO;
	int iO = 0;

	char *str = va_arg(list, char *);

	(void) f;

	if (!str)
	{
		str = "(null)";
	}

	while (str[iO])
	{
		iO++;
	}

	for (jO = iO - 1; jO >= 0; jO--)
	{
		_putchar(str[jO]);
	}

	return (iO);
}

/**
 * print_r13 - print a rot13 string
 * @list: vardiadic list
 * @f: PTR
 * Return: char length
 */

int print_r13(va_list list, flags_types *f)
{
	int x;
	int y;

	char r13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char R13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	char *string = va_arg(list, char *);

	(void)f;

	for (y = 0; string[y]; y++)
	{
		if (string[y] < 'A' || (string[y] > 'Z'
		&& string[y] < 'a') || string[y] > 'z')
			_putchar(string[y]);
		else
		{
			for (x = 0; x <= 52; x++)
			{
				if (string[y] == r13[x])
				{
					_putchar(R13[x]);
				}
			}
		}
	}

	return (y);
}
