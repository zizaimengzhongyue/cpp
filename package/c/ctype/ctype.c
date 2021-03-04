#include <ctype.h>
#include <stdio.h>

int main()
{
    char a = 'a';
    char b = '~';
    printf("%d, %d\n", isalnum(a), isalnum(b));

    a = 'a';
    b = '+';
    printf("%d, %d\n", isalpha(a), isalpha(b));

    a = 'a';
    b = ' ';
    printf("%d, %d\n", isblank(a), isblank(b));

    a = 'a';
    b = '\n';
    printf("%d, %d\n", iscntrl(a), iscntrl(b));

    a = 'a';
    b = '0';
    printf("%d, %d\n", isdigit(a), isdigit(b));

    a = 'a';
    b = '\b';
    printf("%d, %d\n", isgraph(a), isgraph(b));

    a = 'a';
    b = 'A';
    printf("%d, %d\n", islower(a), islower(b));

    a = 'a';
    b = 'A';
    printf("%d, %d\n", isupper(a), isupper(b));

    a = 'a';
    b = '\b';
    printf("%d, %d\n", isprint(a), isprint(b));

    a = 'a';
    b = ',';
    printf("%d, %d\n", ispunct(a), ispunct(b));

    a = 'a';
    b = ' ';
    printf("%d, %d\n", isspace(a), isspace(b));

    a = 'a';
    b = 'z';
    printf("%d, %d\n", isxdigit(a), isxdigit(b));

    a = 'a';
    b = 'B';
    printf("%c, %c\n", toupper(a), tolower(b));
}
