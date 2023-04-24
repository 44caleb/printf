#include "main.h"

/*
print_hex1 - converts numbers to hexdecimal where alphabets are in capital and prints
@args: number argument to be printed
@arr: Buffer
Return: number of hexdecimal numbers printed*/

int print_hex1(va_list args, char arr[BUFF])
{
    int num = va_arg(args, int);
    int base = 16;
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

		if (mod == 10)
		{
			write_to_buff(arr, 'A');
            len++;
		}

		else if (mod == 11)
		{
			write_to_buff(arr, 'B');
            len++;
		}

		else if (mod == 12)
		{
			write_to_buff(arr, 'C');
            len++;
		}

		else if (mod == 13)
		{
			write_to_buff(arr, 'D');
            len++;
		}

		else if (mod == 14)
		{
			write_to_buff(arr, 'E');
            len++;
		}

		else if (mod == 15)
		{
			write_to_buff(arr, 'F');
            len++;
		}

		else
		{
			write_to_buff(arr, mod + '0');
            len++;
		}

        tmp = num;
        exp--;
    }
    return len;
}


/**********PRINT_HEX2*********************/
/*
print_hex2 - converts numbers to hexdecimal where alphabets are in lowercase and prints
@args: number argument to be printed
@arr: Buffer
Return: number of hexdecimal numbers printed*/

int print_hex2(va_list args, char arr[BUFF])
{
    int num = va_arg(args, int);
    int base = 16;
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

		if (mod == 10)
		{
			write_to_buff(arr, 'a');
            len++;
		}

		else if (mod == 11)
		{
			write_to_buff(arr, 'b');
            len++;
		}

		else if (mod == 12)
		{
			write_to_buff(arr, 'c');
            len++;
		}

		else if (mod == 13)
		{
			write_to_buff(arr, 'd');
            len++;
		}

		else if (mod == 14)
		{
			write_to_buff(arr, 'e');
            len++;
		}

		else if (mod == 15)
		{
			write_to_buff(arr, 'f');
            len++;
		}

		else
		{
			write_to_buff(arr, mod + '0');
            len++;
		}

        tmp = num;
        exp--;
    }
    return len;
}

