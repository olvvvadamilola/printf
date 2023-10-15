#include "main.h"

/**
 * b_funct - Prints an unsigned long long integer in binary
 * @catalog: Argument list
 * Return: number of chars printed
 */

int b_funct(va_list catalog)
{

	unsigned long long bi; /*Use 64-bit variable*/
	char binary[65];
	int i, x = 0;

	bi = va_arg(catalog, unsigned long long); /*Get 64-bit argument*/

	if (bi == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; bi > 0; i++)
	{
		binary[i] = (bi % 2) + '0';
		bi /= 2;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(binary[i]);
		x++;
	}

	return (x);

}
