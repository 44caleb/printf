#include "main.h"

/*
print_oct - converts numbers to octadecimal and prints
@args: number argument to be printed
@arr: Buffer
Return: number of octadecimal numbers printed*/

int print_oct(va_list args, char arr[BUFF])
{
    int num = va_arg(args, int);
    int base = 8;
    int len = 0;
    int exp = 0;
    int tmp;
    int mod;

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
