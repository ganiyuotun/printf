#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * printf_string - Prints a string and increments
 * the count of characters printed.
 * @args: The variable argument list containing
 * the string to be printed.
 * @charPrinted: The current count of characters printed.
 *
 */
int printf_string(va_list args, int charPrinted)
{
char *str = va_arg(args, char *);
while (*str != '\0')
{
_putchar(*str);
charPrinted++;
str++;
}
return (charPrinted);
}
