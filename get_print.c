#include "main.h"

int print_nonprint(va_list list, flags_types *f);

/**
 * get_print - fetch specific function by character
 * @s: conversion char
 * Description: loops the structs
 * Return: PTR
 */

int (*get_print(char s))(va_list, flags_types *)
{
	int fgs = 14;
	register int i;

	printhand func_ar[] = {{'i', print_int},
		{'s', print_s},
		{'c', print_c},
		{'%', print_pcnt},
		{'d', print_int},
		{'u', print_unsig},
		{'x', print_h},
		{'X', print_h2},
		{'b', print_bin},
		{'R', print_r13},
		{'r', print_rv},
		{'S', print_nonprint},
		{'o', print_oct},
		{'p', print_add}
		};

	for (i = 0; i < fgs; i++)
	{
		if (func_ar[i].c == s)
		{
			return (func_ar[i].f);
		}
	}

	return (NULL);
}
