#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* _printf- Print a character from a va_list
* @format: A format string containing directives for printing.
* Return: number of characters printed.
*/

int _printf(const char *format, ...)
{

va_list args;
int charPrinted = 0;

if (format == NULL)
{
/* Handle the case where format is NULL */
return (-1);
}

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
 * processSpecifier - Processes a single conversion specifier
 * encountered in the format string.
 * @format: A pointer to the format string.
 * @args: The variable argument list containing additional arguments.
 * @charPrinted: The current count of characters printed.
 *
 * Return: The updated count of characters printed.
 */
int processSpecifier(const char *format, va_list args, int charPrinted)
{
if (format == NULL || *format == '\0')
{
/* Handle the case where format is NULL or specifier is at the end */
return (charPrinted);
}

switch (*format)
{

case 'c':
return (printf_char(args, charPrinted));
case 's':
return (printf_string(args, charPrinted));
case '%':
return (printf_percent(charPrinted));
/*Add more cases for other specifiers if needed*/
default:
/*Handle unknown specifier*/
return (charPrinted);
}
}
