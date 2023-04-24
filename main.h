#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#define BUFF 1024

void write_to_buff(char arr[BUFF], char c);
int print_char(va_list args, char arr[BUFF]);
int print_str(va_list args, char arr[BUFF]);
int print_int(va_list args, char arr[BUFF]);
int _printf(const char *format, ...);
int print_bin(va_list args, char arr[BUFF]);
int print_oct(va_list args, char arr[BUFF]);
int print_rev(va_list args, char arr[BUFF]);
int print_rot13(va_list args, char arr[BUFF]);
int print_hex1(va_list args, char arr[BUFF]);
int print_hex2(va_list args, char arr[BUFF]);
int print_unsint(va_list args, char arr[BUFF]);

int _strlen(char *str);
int _pow(int base, int exp);



#endif

