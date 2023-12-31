#include "../main.h"
#include <stdio.h>

int main(void)
{
    char *str = NULL;
    char c = 'q';
    char a = 65;
    char mod = '%';
    int len = -1013224530, len1;
    unsigned int num = 98;
    int n = -98;

    printf("this is printf: %s, %c, %c, %c\n", str, c, a, mod);
    _printf("this is _printf: %s, %c, %c, %c\n", str, c, a, mod);

    /* handle error if null */
    len =  printf("%%%c%%%s\n", 43, "\0''");
    len1 = _printf("%%%c%%%s\n", 43, "\0''");
    printf("%d, %d\n", len, len1);
    /* handle error if format[0] == '\0' */
    printf("");
    _printf("");

    /* test %i and %d */
    printf("this is printf: %d, %i\n", len, len);
    _printf("this is _printf: %d, %i\n", len, len);

    /* test lenght */
    len = printf("%s, %d, %c, %i, %c, %%c, ALX_IS_GREAT\n", NULL, 922, '%', 65, 65, 't');
    len1 = _printf("%s, %d, %c, %i, %c, %%c, ALX_IS_GREAT\n", NULL, 922, '%', 65, 65, 't');
    printf("%d, %d\n", len, len1);
    _printf("%d, %d\n", len, len1);

    /* test len of NULL */
    len = printf("%s%c", NULL, '\n');
    len1 = _printf("%s%c", NULL, '\n');
    printf("%d\n", len);
    _printf("%d\n", len1);

    /* test if str == "%\n"*/
    len = printf("%\n", "\0\0");
    len1 =_printf("%\n", "\0\0");

    printf("%d\n", len);
    _printf("%d\n", len1);
    /* test if str ==  "%"*/
    len = printf("%", "\0\0");
    len1 =_printf("%", "\0\0");

    printf("%d\n", len);
    _printf("%d\n", len1);

    _printf("----------------------------------------------------\n");
    _printf("%Advanced tasks tests\n");
    /* test to print binary */
    printf("binary format in printf: %b\n", num);
    len1 = _printf("%b\n", num) - 1;
    _printf("len of binary: %d\n", len1);
    len1 = _printf("%b\n", n) - 1;
    _printf("len of binary: %d\n", len1);

    return (0);
}
