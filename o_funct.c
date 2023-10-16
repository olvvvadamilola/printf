#include "main.h"
/**
 * _octal8 - converts decimal to octal
 * @catalog: argument
 * Return: no of characters
 */

int _octal8(va_list catalog)
{
	int x, tal = 0;
	int *arr;
	unsigned int n = va_arg(catalog, unsigned int);
	unsigned int t = n;

	while (n / 8 != 0)
	{
		n /= 8;
		tal++;
	}
	tal++;
	arr = malloc(tal * sizeof(int));

	for (x = 0; x < tal; x++)
	{
		arr[x] = t % 8;
		t /= 8;
	}
	for (x = tal - 1; x >= 0; x--)
	{
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (tal);
}
