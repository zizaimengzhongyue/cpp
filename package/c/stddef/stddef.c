#include <stddef.h>
#include <stdio.h>

int main()
{
    int a = 5;
    int b = 4;
    ptrdiff_t c = (&a) - (&b);
    size_t d = sizeof(a);
    printf("%ld\n", c);
    printf("%ld\n", d);
    return 0;
}
