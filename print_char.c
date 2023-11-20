#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * printf_char - Prints a character from va_list
 * the count of characters printed.
 * @args: The va_list from which to print a character.
 * @charPrinted: The number of characters that have been printed.
 *
 * Return: charPrinted
 */
int printf_char(va_list args, int charPrinted)
{
char c = va_arg(args, int);
_putchar(c);
return (charPrinted + 1);
}
