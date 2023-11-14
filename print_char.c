#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * printf_char - Prints a character and increments
 * the count of characters printed.
 * @args: The variable argument list containing
 * the character to be printed.
 * @charPrinted: The current count of characters printed.
 *
 */
int printf_char(va_list args, int charPrinted)
{
char c = va_arg(args, int);
_putchar(c);
return (charPrinted + 1);
}
