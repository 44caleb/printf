#include "main.h"

/**
 * write_to_buff - creates an array/buffer where characters to be printed will be written to
 * @arr: The array of size BUFF(1024)
 * @c: the character to be written to the array
 * Return: void
 */

void write_to_buff(char arr[BUFF], char c)
{
    int i;

    for (i = 0; i < BUFF; i++)
    {
        if (arr[i] == '\0')
        {
            arr[i] = c;
            return;
        }
    }
}

