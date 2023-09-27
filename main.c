#include "main.h"

int main(void)
{
    char *str = "Hello, World!";
    char ch = 'A';
    int num = 12345;
    unsigned int bin1 = 42;
    unsigned int bin2 = 255;
    unsigned int u_num = 42;
    unsigned int octal_num = 0777;
    unsigned int hex_num = 0x1A3;
    unsigned int upper_hex_num = 0xF1E;

    _printf("Character: %c\n", ch);
    _printf("String: %s\n", str);
    _printf("Percent: %%\n");
    _printf("Random format: %q\n");
    _printf("Integer: %d\n", num);
    _printf("Binary 1: %b\n", bin1);
    _printf("Binary 2: %b\n", bin2);
    _printf("Unsigned: %u\n", u_num);
    _printf("Octal: %o\n", octal_num);
    _printf("Hexadecimal: %x\n", hex_num);
    _printf("Upper Hexadecimal: %X\n", upper_hex_num);

    int len;
    int num;	

    len = function("Character: %c\n", 'A');
    function("Length: %d\n", len);

    len = function("String: %s\n", "Hello, World!");
    function("Length: %d\n", len);

    len = function("Integer: %d\n", 12345);
    function("Length: %d\n", len);

    unsigned int u_num;

    len = function("Unsigned Integer: %u\n", u_num);
    function("Length: %d\n", len);

    len = function("Octal: %o\n", 0755);
    function("Length: %d\n", len);

    len = function("Hexadecimal: %x\n", 0x1a3f);
    function("Length: %d\n", len);

    len = function("Binary: %b\n", 42);
    function("Length: %d\n", len);

    return (0);
}
