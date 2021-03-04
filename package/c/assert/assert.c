#include <assert.h>
#include <stdio.h>

int add(int a, int b)
{
    assert(a == 2);
    return a + b;
}

int main()
{
    printf("%d\n", add(1, 2));
    return 0;
}
