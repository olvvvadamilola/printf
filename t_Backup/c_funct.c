#include "main.h"

/**
 * c_funct - function to print a string to stdout
 * @catalog: va_list of arguments
 * Return: 1
 */
int c_funct(va_list catalog)
{
	char _c;

	_c = va_arg(catalog, int);
	(_putchar(_c));
	return (1);
}
