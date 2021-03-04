#include <stdarg.h>
#include <stdio.h>

int sum(int n, ...)
{
    int sum = 0;
    va_list vl;
    va_start(vl, n);
    for (int i = 0; i < n; i++) {
        sum += va_arg(vl, int);
    }
    va_end(vl);
    return sum;
}

int main()
{
    printf("%d\n", sum(3, 2, 3, 4));
    return 0;
}
