#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start = clock();
    time_t s = clock();
    int i = 0;
    int a = 0;
    for (i = 0; i <= 100000000; i++) {
        a++;
    }
    time_t e = clock();
    clock_t end = clock();
    clock_t cost = end - start;
    printf("%ld\n", end - start);
    printf("%d\n", CLOCKS_PER_SEC);
    printf("%ld\n", cost / CLOCKS_PER_SEC);
    printf("%lf\n", difftime(s, e));
    return 0;
}
