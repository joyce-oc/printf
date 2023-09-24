#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _printf - Produces output according to a format.
 * @format: A character string containing format directives.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    char ch;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            putchar(*format);
            count++;
        }
        else
        {
            format++;
            if (*format == '\0')
                break;

            if (*format == 'c')
            {
                ch = va_arg(args, int);
                putchar(ch);
                count++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                if (str == NULL)
                    str = "(null)";
                while (*str)
                {
                    putchar(*str);
                    str++;
                    count++;
                }
            }
            else if (*format == '%')
            {
                putchar('%');
                count++;
            }
            else
            {
                putchar('%');
                putchar(*format);
                count += 2;
            }
        }
        format++;
    }

    va_end(args);
    return count;
}
