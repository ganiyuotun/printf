#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * print_int - print an integer
 * @format: the inter to print
 * @...: the variable argument
 *
 * Return: 0
 */

void print_int(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format != '\0')

	{
		if (*format == 'd' || *format == 'i')
		{

		int number = va_arg(args, int);

		printf("%d", number);
		}
		format++;
		}
	va_end(args);
}
