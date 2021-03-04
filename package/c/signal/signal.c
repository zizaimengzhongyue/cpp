#include <signal.h>
#include <stdio.h>

void handler(int n) { printf("我捕获了 %d 信号\n", n); }

int main()
{
    void* h = signal(SIGINT, handler);
    raise(SIGINT);
    printf("finished");
    return 0;
}
