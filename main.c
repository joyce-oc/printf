#include "main.h"

int main(void)
{
    char *str = "Hello, World!";
    char ch = 'A';
    int num = 12345;
    unsigned int bin1 = 42;
    unsigned int bin2 = 255;

    _printf("Character: %c\n", ch);
    _printf("String: %s\n", str);
    _printf("Percent: %%\n");
    _printf("Random format: %q\n");
    _printf("Integer: %d\n", num);
    _printf("Binary 1: %b\n", bin1);
    _printf("Binary 2: %b\n", bin2);

    return (0);
}
