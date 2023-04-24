#include "main.h"

/**_printf - prints characters to the standard output
 * @format: string which contains characters to be printed and specifiers
 * @...: variable number of arguments to be passed to function
 * Return: returns the number of characters printed
 */

 int _printf(const char * format, ...)
{
    char arr[BUFF] = {'\0'};
    int len = 0;

    va_list args;
    va_start(args, format);


    if (format == NULL)
    {
        return -1;
    }

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;

            if (*format == '%')
            {
                write_to_buff(arr, '%');
                len++;
                format++;
            }

            if (*format == 'c')
            {
                len += print_char(args, arr);
                format++;
            }

            if (*format == 's')
            {
                len += print_str(args, arr);
                format++;
            }

            if (*format == 'b')
            {
                len += print_bin(args, arr);
                format++;
            }

	    if ((*format == 'i') || (*format == 'd'))
	    {
		    len += print_int(args, arr);
		    format++;
	    }

            if (*format == 'o')
            {
                len += print_oct(args, arr);
                format++;
            }

            if (*format == 'r')
            {
                len += print_rev(args, arr);
                format++;
            }

            if (*format == 'X')
            {
                len += print_hex1(args, arr);
                format++;
            }

            if (*format == 'x')
            {
                len += print_hex2(args, arr);
                format++;
            }

            if (*format == 'u')
            {
                len += print_unsint(args, arr);
                format++;
            }
        }

        else
        {
            write_to_buff(arr, *format);
            len++;
            format++;
        }

    }

    write(1, &arr[0], len);
    return len;

}
