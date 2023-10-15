#include "main.h"

/**
 * c_funct - function to print a string to stdout
 * @catalog: va_list of arguments
 * Return: 0
 */
int c_funct(va_list catalog)
{
	int _c = va_arg(catalog, int);

	return (_putchar(_c));
}
