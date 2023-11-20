#include <stdio.h>
#include "main.h"

/**
* printf_d - Prints an integer using the 'd' specifier
* and increments the count of characters printed.
* @args: The variable argument list containing the integer.
* @charPrinted: The current count of characters printed.
*
* Return: The updated count of characters printed.
*/
int printf_d(va_list args, int charPrinted)
{
int num = va_arg(args, int);
char str[12];  /* Assuming a maximum of 12 digits for an int */
int i;

/* Convert the integer to a string */
sprintf(str, "%d", num);

for (i = 0; str[i] != '\0'; i++) 
{
_putchar(str[i]);
charPrinted++;
}

/* You can now use 'num' in other parts of your code if needed */

return (charPrinted);
}
