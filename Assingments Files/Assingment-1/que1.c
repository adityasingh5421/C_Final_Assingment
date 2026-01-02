#include <stdio.h>

int main()
{
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 25.678;

    printf("Integer value = %d, Size = %lu bytes\n", a, sizeof(a));
    printf("Float value   = %.2f, Size = %lu bytes\n", b, sizeof(b));
    printf("Char value    = %c, Size = %lu byte\n", c, sizeof(c));
    printf("Double value  = %.3f, Size = %lu bytes\n", d, sizeof(d));

    return 0;
}
