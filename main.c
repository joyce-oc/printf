#include "main.h"

int main(void)
{
    char *str = "Hello, World!";
    char ch = 'A';
    int num = 12345;

    _printf("Character: %c\n", ch);
    _printf("String: %s\n", str);
    _printf("Percent: %%\n");
    _printf("Random format: %q\n");
    _printf("Integer: %d\n", num);

    return (0);
}
