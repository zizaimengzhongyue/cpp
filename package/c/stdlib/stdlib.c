#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmp(const void* a, const void* b) { return *(int*)a - *(int*)b; }

int main()
{
    char f[4] = "1.23";
    printf("%f\n", atof(f));
    char ii[2] = "1";
    printf("%d\n", atoi(ii));
    char l[20] = "123123123123123123";
    printf("%ld\n", atol(l));
    char ll[20] = "12312312312312312";
    printf("%lld\n", atoll(ll));

    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("%d\n", rand() % 10);
    }

    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        printf("%d\n", rand() % 10);
    }

    int* a;
    a = calloc(100, sizeof(int));  // calloc 申请的内存在栈上
    for (i = 0; i < 100; i++) {
        a[i] = i;
    }
    for (i = 0; i < 100; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    free(a);

    int* b;
    b = malloc(100 * sizeof(int));  // malloc 申请的内存分配在堆上
    for (i = 0; i < 100; i++) {
        b[i] = i;
    }
    for (i = 0; i < 100; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    free(b);

    a = calloc(100, sizeof(int));
    for (i = 0; i < 100; i++) {
        a[i] = 100 - i;
    }
    qsort(a, 100, sizeof(int), cmp);
    for (i = 0; i < 100; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    char* path;
    path = getenv("PATH");
    printf("%s\n", path);

    int res = system("ls");
    printf("ls 的执行结果是: %d\n", res);

    printf("%d, %d\n", abs(1), abs(-1));

    div_t r = div(20, 3);  // 这个还是很好用的
    printf("%d, %d\n", r.quot, r.rem);

    exit(EXIT_SUCCESS);
    return 0;
}
