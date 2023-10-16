#include "main.h"
/**
 * p_funct - print handles %p format specifier.
 * It prints the address of a pointer using the %p specifier.
 * @catalog: list of arguments
 * Return: number of characters printed.
 */
int p_funct(va_list catalog)
{
	void *pointer = va_arg(catalog, void *);
	int cnt = 0;

	if (pointer == NULL)
	{
		cnt += _printf("(null)");
	}
	else
	{
		cnt += _printf("%p", pointer);
	}

	return (cnt);
}
