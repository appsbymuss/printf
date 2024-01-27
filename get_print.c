#include "main.h"

int printt(va_list list, flags_types *f);

/**
 * get_print - fetch specific function by character
 * @s: conversion char
 * Description: loops the structs
 * Return: PTR
 */

int (*get_print(char s))(va_list, flags_types *)
{
	printhand func_ar[] = {{'s', print_s}, {'c', print_c}, {'%', print_pcnt}};

	int fgs = 14;

	register int i;


	for (i = 0; i < fgs; i++)
	{
		if (func_ar[i].c == s)
		{
			return (func_ar[i].f);
		}
	}

	return (NULL);
}

