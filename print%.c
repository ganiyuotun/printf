#include <unistd.h>
#include "main.h"

/**
 * printf_percent - Prints a percentage sign
 * the count of characters printed.
 * @charPrinted: The current count of characters printed.
 *
 * Return: The updated count of characters printed.
 */
int printf_percent(int charPrinted)
{
_putchar('%');
return (charPrinted + 1);
}
