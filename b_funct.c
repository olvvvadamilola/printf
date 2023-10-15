#include "main.h"

/**
 * b_funct - Prints an unsigned long long integer in binary
 * @catalog: Argument list
 * Return: number of chars printed
 */

int b_funct(va_list catalog)
{
	unsigned int w, g;
	int binary[65];
	int bi = 0, j;

	w = va_arg(catalog, int);
	if (w == 0)
	{
		g = w + '0';
		_putchar(g);
		return (1);
	}
	/* Convert the decimal number to binary */
	while (w > 0)
	{
		binary[bi++] = w % 2;
		w /= 2;
	}
	if (bi >= 65)
	{
		return (-1);
	}
	/* Print the binary number */
	for (j = bi - 1; j >= 0; j--)
	{
		int x = binary[j] + 48;

		_putchar(x);
	}
	return (bi);
}
