#include "main.h"

int main(void)
{
    char *str = "Hello, World!";
    char ch = 'A';

    _printf("Character: %c\n", ch);
    _printf("String: %s\n", str);
    _printf("Percent: %%\n");
    _printf("Random format: %q\n");

    return (0);
}
