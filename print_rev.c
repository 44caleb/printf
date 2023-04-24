#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @args - string argument to be reversed
 * @arr - Buffer
 * Returns: number of characters printed
*/

int print_rev(va_list args, char arr[BUFF])
{
    char *str = va_arg(args, char *);
    int len;
    int i;

    if (str == NULL)
    {
        return -1;
    }

    len = _strlen(str);

    for (i = len-1; i >= 0; i--)
    {
        write_to_buff(arr, str[i]);
    }

    return len;
}
