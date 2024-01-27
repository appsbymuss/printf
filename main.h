#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct to store the flags for the format specifiers
 * @p: flag '+'
 * @s: flag ' '
 * @h: flag '#'
 */
typedef struct flags
{
	int p;
	int s;
	int h;
} flags_types;

/**
 * struct print_handler - struct to store the correct printing function based
 * @c: specifier
 * @f: func PTR+
 */
typedef struct print_handler
{
	char c;
	int (*f)(va_list ap, flags_types *f);
} printhand;

/* _printf prototype*/
int _printf(const char *format, ...);

/* get_flag prototype*/
int get_flag(char s, flags_types *f);

/* get_print prototype*/
int (*get_print(char s))(va_list, flags_types *);

/* write_functions Prototype*/
int _putchar(char c);
int _puts(char *s);

/* print_alphadecimal prototype */
int print_s(va_list list, flags_types *f);
int print_c(va_list list, flags_types *f);

/* print_pcnt prototype*/
int print_pcnt(va_list list, flags_types *f);

#endif
