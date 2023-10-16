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

    for (tal = 0; n != 0; tal++)
	{
		n /= 8;
	}
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
	return tal;
}
