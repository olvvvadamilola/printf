#include "main.h"

/**
 * select_funct - selects the correct function to perform.
 * @s: character to match
 * Return: number of characters printed.
 */

int (*select_funct(char s))(va_list catalog)
{
	int k;

	list_array format_s[] = {
		{'c', &c_funct},
		{'s', &s_funct},
		{'\0', NULL}
	};
	for (k = 0; format_s[k].chr; k++)
		if (s == format_s[k].chr)
			return (format_s[k]._funct);

	return (0);
}
