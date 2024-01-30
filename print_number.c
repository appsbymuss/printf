#include "main.h"

/**
 * print_int - Int
 * @list: variadic list
 * @f: PTR
 * Return: NMR
 */
int print_int(va_list list, flags_types *f)
{
	int number = va_arg(list, int);
	int Resuult = counter_of_digit(number);

	if (f->s == 1 && f->p == 0 && number >= 0)
		Resuult += _putchar(' ');

	if (f->p == 1 && number >= 0)
		Resuult += _putchar('+');

	if (!(number > 0))
		Resuult++;

	printNum(number);
	return (Resuult);
}

/**
 * print_unsig - Unsigned Int
 * @list: variadic list
 * @f: PTR
 * Return: NMR
 */
int print_unsig(va_list list, flags_types *f)
{
	unsigned int NumberUnsign = va_arg(list, unsigned int);
	char *s = convertFunc(NumberUnsign, 10, 0);
	(void)f;

	return (_puts(s));
}

/**
 * printNum - Prints number
 * @number: the number to print
 */

void printNum(int number)
{
	unsigned int number1;

	if (number < 0)
	{
		_putchar('-');
		number1 = -number;
	}
	else
	{
		number1 = number;
	}

	if (number1 / 10)
		printNum(number1 / 10);

	_putchar((number1 % 10) + '0');
}

/**
 * counter_of_digit - gives out printf digits number
 * @num: the number
 * Return: NMR
 */
int counter_of_digit(int num)
{
	unsigned int llon = 0;
	unsigned int ddon;

	if (num < 0)
	{
		ddon = num * -1;
	}
	else
	{
		ddon = num;
	}
	while (!(ddon == 0))
	{
		ddon /= 10;
		llon++;
	}

	return (llon);
}

