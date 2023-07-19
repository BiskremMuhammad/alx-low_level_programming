#include "main.h"

/**
 * print_name - fn to print a name by callback to another fn
 * @name: the name
 * @f: callback fn
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
