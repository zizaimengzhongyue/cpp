#include <limits.h>
#include <stdio.h>

int main()
{
    printf("%d, %d\n", INT_MIN, INT_MAX);
    printf("%ld, %ld\n", LONG_MIN, LONG_MAX);
    printf("%lld, %lld\n", LLONG_MIN, LLONG_MAX);
    return 0;
}
