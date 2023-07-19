#include "function_pointers.h"

/**
 * print_name - fn to print a name by callback to another fn
 * @name: the name
 * @f: callback fn
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
