#include "main.h"

/**
 * _search - searches for a letter in the array
 * @letter: character
 * Return: 0 or 1(exists)
 */

int _search(char letter)
{
	int it;
	char letter_arr[] = "csdi";

	for (it = 0; letter_arr[it]; it++)
	{
		if (letter == letter_arr[it])
			return (1);
	}
	return (0);
}
