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
    int num, temp, digits, divisor;
    unsigned int u_num; 
    int i;

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
            else if (*format == 'd' || *format == 'i')
            {
                num = va_arg(args, int);
                temp = num;
                digits = 1;

                if (num < 0)
                {
                    putchar('-');
                    count++;
                    temp = -num;
                }

                while (temp / 10 != 0)
                {
                    temp /= 10;
                    digits++;
                }

                divisor = 1;
                for (i = 1; i < digits; i++)
                    divisor *= 10;

                while (divisor > 0)
                {
                    int digit = num / divisor;
                    putchar(digit + '0');
                    count++;
                    num -= digit * divisor;
                    divisor /= 10;
                }
            }
            else if (*format == 'u')
            {
                u_num = va_arg(args, unsigned int);
                temp = u_num;
                digits = 1;

                while (temp / 10 != 0)
                {
                    temp /= 10;
                    digits++;
                }

                divisor = 1;
                for (i = 1; i < digits; i++)
                    divisor *= 10;

                while (divisor > 0)
                {
                    int digit = u_num / divisor;
                    putchar(digit + '0');
                    count++;
                    u_num -= digit * divisor;
                    divisor /= 10;
                }
            }
            else if (*format == 'b') 
            {
                u_num = va_arg(args, unsigned int);

                if (u_num == 0)
                {
                    putchar('0');
                    count++;
                }
                else
                {
                    int binary[32];
                    int index = 0;

                    while (u_num > 0)
                    {
                        binary[index] = u_num % 2;
                        u_num /= 2;
                        index++;
                    }

                    for (i = index - 1; i >= 0; i--)
                    {
                        putchar(binary[i] + '0');
                        count++;
                    }
                }
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
