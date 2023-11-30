#include "function_pointers.h"

/**
 * print_name - a function that calls another function prints a name
 * @name: name to print
 * @f: pointer to function to call
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
