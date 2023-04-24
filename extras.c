#include "main.h"

/*
_pow - raises a number by a power
@base: base of the number
@exp: power the number is raised by
Return: returns exponent result*/

int _pow(int base, int exp)
{
    int i;
    int value = 1;

    if (exp == 0)
    {
        return 1;
    }

    for (i = 0; i < exp; i++)
    {
        value = value * base;
    }
    return value;
}


/*******************_strlen***********************/
/**
 *_strlen - gets number of characters in a string
 *@str: string argument
 *Return: number of characters
*/

int _strlen(char *str)
{
    int len = 0;

    while (*str != '\0')
    {
        len++;
        str++;
    }

    return len;
}
