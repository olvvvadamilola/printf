#include "main.h"
/**
 * xX_funct - Handles the %x and %X format specifiers for hexadecimal.
 * @catalog: A va_list containing the arguments.
 * @uppercase: A boolean flag indicating
 * to convert to uppercase (true) or lowercase (false).
 * Return: number of characters printed.
 */
int xX_funct(va_list catalog, bool uppercase)
{
	unsigned int num = va_arg(catalog, unsigned int);
	char hex_buffer[buffer_size];
	int tal = 0;
	int i, remainder;
	char base_char = uppercase ? 'A' : 'a';

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
			hex_buffer[tal++] = '0' + remainder;
		else
			hex_buffer[tal++] = base_char + (remainder - 10);
		num /= 16;
	}

	for (i = tal - 1; i >= 0; i--)
	{
		_putchar(hex_buffer[i]);
	}

	return (tal);
}
