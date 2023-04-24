#include "main.h"

/**
 * print_char - handles the %c specifier for printing characters
 * @args: character argument to be printed
 * @arr: array of size BUFF representing the buffer
 * Return: number of characters sent to buffer i.e. 1
 */
int print_char(va_list args, char arr[BUFF])
{
	char c = (char)va_arg(args, int);

	write_to_buff(arr, c);

	return (1);
}

