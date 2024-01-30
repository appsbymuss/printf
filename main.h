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
 * @f: function pointer
 */
typedef struct print_handler
{
	char c;
	int (*f)(va_list ap, flags_types *f);
} printhand;


/* get_flag prototype*/
int get_flag(char s, flags_types *f);

/* get_print prototype*/
int (*get_print(char s))(va_list, flags_types *);


/* print_base prototypes */
int print_h(va_list list, flags_types *f);
int print_h2(va_list list, flags_types *f);
int print_bin(va_list list, flags_types *f);
int print_oct(va_list list, flags_types *f);

/* print_numbers prototypes*/
int print_int(va_list list, flags_types *f);
void printNum(int number);
int print_unsig(va_list list, flags_types *f);
int counter_of_digit(int num);

/* converter prototype*/
char *convertFunc(unsigned long int number, int b, int lc);

/* _printf prototype*/
int _printf(const char *format, ...);

/* print_custom prototype */
int print_rv(va_list list, flags_types *f);
int print_r13(va_list list, flags_types *f);
int print_nonprint(va_list list, flags_types *f);

/* write_functions Prototype*/
int _putchar(char c);
int _puts(char *s);

/* print_pcnt prototype*/
int print_pcnt(va_list list, flags_types *f);

/* print_add prototype */
int print_add(va_list list, flags_types *f);

/* print_alphadecimal prototype */
int print_s(va_list list, flags_types *f);
int print_c(va_list list, flags_types *f);

/* print_pcnt prototype*/
int print_pcnt(va_list list, flags_types *f);

#endif
