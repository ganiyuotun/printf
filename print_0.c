#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* _printf - Custom printf function
* @format: Format string with conversion specifiers
*
* Return: The number of characters printed (excluding the null byte)
*/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
va_start(args, format);
while (*format)
{
if (*format == '%' && *(format + 1) != '\0')
{
format++; // Move past '%'
switch (*format)
{
case 'c':
count += write(1, &va_arg(args, int), 1);
break;
case 's':
count += write(1, va_arg(args, char *), 1);
break;
case '%':
count += write(1, "%", 1);
break;
}
}
else
{
count += write(1, format, 1);
}
format++;
}
va_end(args);
return count;
}
// Testing the function
int main(void)
{
_printf("Hello, %c%s%%!\n", 'W', "orld");
return 0;
}
