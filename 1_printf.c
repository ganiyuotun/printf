#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
* _printf - Prints an integer.
* @format: A format string containing directives for printing.
* @...: variables to be executed
* Return: The updated count of characters printed.
*/
int _printf(const char *format, ...)
{
va_list args;
int charPrinted = 0;
if (format == NULL)
return (-1);

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

/**
* processSpecifier - Processes a specifier in the format string.
* @format: A format string containing directives for printing.
* @args: The va_list from which to print a character.
* @charPrinted: The number of characters that have been printed.
*
* Return: The updated count of characters printed.
*/

int processSpecifier(const char *format, va_list args, int charPrinted)
{
switch (*format)
{
case 'd':
case 'i':
{

int num = va_arg(args, int);
char str[12]; /*Buffer to hold the integer as a string*/
snprintf(str, sizeof(str), "%d", num); /*Convert the integer to a string*/

while (str[count] != '\0')
{
_putchar(str[count]);
charPrinted++;
count++;
}
break;
}
/* Handle other specifiers...*/
}
return (charPrinted);
}
