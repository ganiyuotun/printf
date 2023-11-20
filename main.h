#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list args, int charPrinted);
int printf_string(va_list args, int charPrinted);
int printf_percent(int charPrinted);
int processSpecifier(const char *format, va_list args, int charPrinted);
<<<<<<< HEAD
int printf_d(va_list args, int charPrinted);
int printf_i(va_list args, int charPrinted);
=======
void handle_d(const char *format, va_list args);
void handle_i(const char *format, va_list args);
>>>>>>> a3af93757e9ada186e1038539275789820a65bcb

#endif
