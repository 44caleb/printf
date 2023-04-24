#include "main.h"

/*print_bin - converts number to binary and writes it to a buffer for printing
@args: arguments which contains number to be printed to buffer
@arr: arr/buffer
Return: number of characters written
*/

int print_bin(va_list args, char arr[BUFF])
{
    int num = va_arg(args, int);
    int base = 2;
    int len = 0;
    int exp = 0;
    int tmp;
    int mod;

    if (num < 0)
    {
        write_to_buff(arr, '-');
        len++;
        num = -num;
    }

    tmp = num;

    while (num >= base)
    {
        num /= base;
        exp++;
    }

    num = tmp;

    while (exp >= 0)
    {

        tmp = tmp / _pow(base, exp);
		mod = tmp % base;
        write_to_buff(arr, mod + '0');
        len++;
        tmp = num;
        exp--;
    }
    return len;
}
