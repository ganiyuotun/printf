#include <stdarg.h>
#include <stdio.h>
#include <"main.h">

/**
* _printf - writes output according to a format.
* @format: character string containing the format.
*
* Return: number of characters printed.
*/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

for (const char *p = format; *p != '\0'; p++)
{
if (*p == '%')
{
p++;
(*p == 'c' ? putchar(va_arg(args, int)) :
*p == 's' ? printf("%s", va_arg(args, char*)) :
*p == '%' ? putchar('%') :
putchar('%'), putchar(*p));
count++;
}
else
{
putchar(*p);
count++;
}
}

va_end(args);

return (count);
}
