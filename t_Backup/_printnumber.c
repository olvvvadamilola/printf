#include "main.h"
/**
 * _printnumber - prints a number
 * @n: number to print
 * @t: number of times printed
 * Return: number of times printed
 */
int _printnumber(long n, int t)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		t++;
	}
	if (n / 10)
		t = _printnumber(n / 10, t);

	_putchar(n % 10 + '0');
	return (t + 1); /* Increment t to count the current digit*/
}
