#include <unistd.h>

/**
 * _putchar - writes a character to stdout.
 * @char: character to write.
 *
 * Return: number of characters written.
 */
int _putchar(char char)
{
   return (write(1, &char, 1));
}
