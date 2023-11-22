#include <stdarg.h>
#include <stdio.h>
#include "main.h"

void my_printf(const char *format, ...)
{
va_list args;
va_start(args, format);

while (*format != '\0')
{
if (*format == 'd' || *format == 'i')
{
int i = va_arg(args, int);
printf("%d", i);
}
format++;
}

va_end(args);
}
