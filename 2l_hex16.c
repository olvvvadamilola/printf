#include "main.h"

/**
 * x_funct - Handles the %x format specifier (lowercase hexadecimal).
 * @catalog: A va_list containing the arguments.
 * Return: The number of characters printed.
 */
int x_funct(va_list catalog)
{
	int x, tal = 0;
	int *arr;
	unsigned int n = va_arg(catalog, unsigned int);
	unsigned int t = n;

	while (n / 16 != 0)
	{
		n /= 16;
		tal++;
	}
	tal++;
	arr = malloc(tal * sizeof(int));

	for (x = 0; x < tal; x++)
	{
		arr[x] = t % 16;
		t /= 16;
	}

	for (x = tal - 1; x >= 0; x--)
	{
		if (arr[x] < 10)
			_putchar(arr[x] + '0');
		else
			_putchar(arr[x] - 10 + 'a');
	}

	free(arr);
	return (tal);
}
