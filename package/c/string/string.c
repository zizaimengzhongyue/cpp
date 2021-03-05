#include <stdio.h>
#include <string.h>

int main()
{
    char *a = "hello";
    char b[5];
    memcpy(b, a, 4);
    puts(b);

    char c[] = "hello,world";
    memmove(c + 6, c, 5);
    puts(c);

    char d[100];
    strcpy(d, "hello,world");
    puts(d);

    char e[100] = "hello,world";
    char f[100];
    strncpy(f, e, 5);
    puts(f);

    char g[100] = "hello";
    char h[100];
    strcat(h, g);
    strcat(h, g);
    puts(h);

    char *i = "hello";
    char *j = "world";
    printf("%d\n", memcmp(i, j, 1));

    char k[] = "hello,world";
    printf("%ld\n", strlen(k));
    memset(k, '#', 11);
    puts(k);
    return 0;
}
