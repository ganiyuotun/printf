#include "main.h"
#include "printf_char.c"
#include "printf_string.c"
#include "printf_percent.c"
/**
* _printf- Custom implementation of the printf function.
* @format: A format string containing directives for printing.
* Return: number of characters printed.
*/

int _printf(const char *format, ...)
{
int charPrinted = 0;

va_list args;

va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;
charPrinted = processSpecifier(format, args, charPrinted);
format++;
}
else
{
_putchar(*format);
charPrinted++;
format++;
}
}
va_end(args);
return (charPrinted);
}
int processSpecifier(const char *format, va_list args, int charPrinted) 
{
switch (*format) 
{

case 'c':
return printf_char(args, charPrinted);
case 's':
return printf_string(args, charPrinted);
case '%':
return printf_percent(charPrinted);
// Add more cases for other specifiers if needed
default:
// Handle unknown specifier
return charPrinted;
}
}
