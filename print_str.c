#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int printf_string(va_list args, int charPrinted) {
char *str = va_arg(args, char *);
while (*str != '\0') {
_putchar(*str);
charPrinted++;
str++;
}
return charPrinted;
}