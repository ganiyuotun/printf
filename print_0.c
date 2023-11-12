#include <stdio.h>
#include <stdarg.h>
#include <"main.h">

/**
* _printf - Produces output according to a format.
* @format: The format string.
*
* Return: The number of characters printed
* (excluding the null byte used to end output to strings).
*/
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);

int count = 0;

while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case  'c':
count += putchar(va_arg(args, int));
break;
case 's':
count += putchar(va_arg(args, char*));
break;
case '%':
count += putchar('%');
break;
deafult:
break;
}
}
else
{
count += putchar(*format);
}

format++;
}

va_end(args);
return (count);
}
