#include <errno.h>
#include <pthread.h>
#include <stdio.h>

void* func_a()
{
    errno = EDOM;
    printf("func_a: %d\n", errno);
    return NULL;
}

void* func_b()
{
    errno = ERANGE;
    printf("func_b: %d\n", errno);
    return NULL;
}

int main()
{
    func_a();
    func_b();

    // errno 线程安全
    int i = 0;
    for (i = 0; i < 1000; i++) {
        pthread_t t1;
        pthread_t t2;
        pthread_create(&t1, NULL, func_a, NULL);
        pthread_create(&t2, NULL, func_b, NULL);
        pthread_join(t1, NULL);
        pthread_join(t2, NULL);
    }
}
