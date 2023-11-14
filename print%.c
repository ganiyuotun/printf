#include <unistd.h>
#include "main.h"

int printf_percent(int charPrinted) {
_putchar('%');
return charPrinted + 1;
}
