#include "function_pointers.h"
/**
 *print_name - this function prints name
 *@name: this is the name to be printed
 *@f: this is a function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		(*f)(name);
}
