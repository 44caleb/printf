#include "main.h"

/**
 * print_str - for printing strings. It writes the string characters to buffer
 * @args: the string argument to be printed
 * @arr: array where string characters will be written to before printing
 *
 * Return: number of characters in the string
 */
int print_str(va_list args, char arr[BUFF])
{
	char *str = va_arg(args, char *);
	int char_count = 0;

	if (str == NULL)
	{
		return (-1);
	}

	while (*str != '\0')
	{
		write_to_buff(arr, *str);
		str++;
		char_count++;
	}

	return (char_count);
}

