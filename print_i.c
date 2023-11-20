#include <stdarg.h>
#include "main.h"

/**
* printf_i - Prints an integer using the 'i' specifier
* and increments the count of characters printed.
* @args: The variable argument list containing the integer.
* @charPrinted: The current count of characters printed.
*
* Return: The updated count of characters printed.
*/
int printf_i(va_list args, int charPrinted)
{
/* The implementation is the same as printf_d since 'i' is equivalent to 'd' in printf */
return (printf_d(args, charPrinted));
}
