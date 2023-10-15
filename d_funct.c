#include "main.h"

/**
 * d_funct - function to print %d format specifier
 * to stdou
 * @catalog: va_list of arguments
 * Return: number of characters printed.
 */
int d_funct(va_list catalog)
{
	int nbr = va_arg(catalog, int);

	return (_printnumber(nbr, 0));
}
