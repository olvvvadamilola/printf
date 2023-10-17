#include "main.h"
/**
 * u_funct - prints unsigned int
 * @catalog: argument
 * Return: no of characters
 */
int u_funct(va_list catalog)
{
	int f = 0;
	unsigned int u = va_arg(catalog, unsigned int);

	f = _printnumber(u, 0);
	return (f);
}
