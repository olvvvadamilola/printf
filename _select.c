#include "main.h"

/**
 * select_funct - selects the correct function to perform.
 * @s: character to match
 * Return: number of characters printed.
 */

int (*select_funct(char s))(va_list args)
{
	int i;

	list_array format_s[] = {
		{'c', &c_funct},
		{'s', &s_funct},
		{'\0', NULL}
	};
	for (i = 0; format_s[i]._char; i++)
		if (s == format_s[i]._char)
			return (format_s[i]._funct);

	return (0);
}
