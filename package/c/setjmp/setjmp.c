// 这个库太好玩儿了
#include <setjmp.h>
#include <stdio.h>

void func_a();
void func_b();

jmp_buf env;

void func_a()
{
    int count = 1;
    int val = setjmp(env);
    printf("%d\n", count++);
    func_b();
}

void func_b() { longjmp(env, 1); }

int main()
{
    func_a();
    return 0;
}
