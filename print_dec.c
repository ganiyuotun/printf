#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printf_decimal - prints a decimal value and increments
 * the count of characters printed
 *
 * This function is designed to be used as a callback
 * in a custom function.
 * takes va_list containing variable arguents, integer value
 * from the list, and prints it using the %d specifier of
 * characters printed is then incremented and returned.
 *
 * @args: the va_list containing the variable arguments.
 * @charPrinted: The current count of characters printed.
 *
 * return: the updated count of characters printed after
 * printing the decimal value
 */

int printf_decimal(va_list args, int charPrinted)
{

	if (*format == 'd' || *format == 'i')
	{
		int number = (va_args, int);

		printf("%d\n", number);
	}

	charPrinted++;

	return (charPrinted);
}
