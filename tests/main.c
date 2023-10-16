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

    printf("this is printf: %s, %c, %c, %c\n", str, c, a, mod);
    _printf("this is _printf: %s, %c, %c, %c\n", str, c, a, mod);

    /* handle error if null */
    // printf(NULL);
    _printf(NULL);

    /* handle error if format[0] == '\0' */
    // printf("");
    _printf("");

    /* test %i and %d */
    printf("this is printf: %d, %i\n", len, len);
    _printf("this is _printf: %d, %i\n", len, len);

    /* test lenght */
    len = printf("anas%s, %d, %c, %i, %c, %%\n", "\0", 922, '%', 65, 65);
    len1 = _printf("anas%s, %d, %c, %i, %c, %%\n", "\0", 922, '%', 65, 65);
    printf("%d, %d\n", len, len1);
    _printf("%d, %d\n", len, len1);

    /* test to print binary */
    len1 = _printf("%b\n", num) - 1;
    _printf("len of binary: %d\n", len1);

    return (0);
}
