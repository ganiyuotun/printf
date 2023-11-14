main.h:
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list args, int charPrinted);
int printf_string(va_list args, int charPrinted);
int printf_percent(int charPrinted);

#endif
