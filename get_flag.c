#include "main.h"

/**
 * get_flag - find and gets format string flag
 * @s: str flag character
 * @f: fl
 *
 * Return: if successful 1 else 0
 */
int get_flag(char s, flags_types *f)
{
	int x = 0;

	switch (s)
	{
		case '+':
			f->p = 1;
			x = 1;
			break;
		case ' ':
			f->s = 1;
			x = 1;
			break;
		case '#':
			f->h = 1;
			x = 1;
			break;
	}

	return (x);
}
