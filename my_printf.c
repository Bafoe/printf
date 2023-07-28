#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - prints formatted text
 * @format: the string to be printed
 *
 * Return: always 0 success
 */
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
while (*format)
{
char spec;
if (*format == '%')
{
format++;
if (*format == 'c')
{
int x = va_arg(args, int);
putchar(x);
}
else if (*format == 's')
{
char *x = va_arg(args, char*);
while (*x)
{
putchar(*x);
x++;
}
}
}
else
{
putchar(*format);
}
format++;
}
va_end(args);
return (0);
}
