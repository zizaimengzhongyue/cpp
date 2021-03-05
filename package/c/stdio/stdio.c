#include <stdio.h>

int main()
{
    char name[5];
    printf("请输入文件名：");
    scanf("%s", name);

    FILE *f = fopen(name, "a+");
    if (f == NULL) {
        printf("打开 %s 文件失败\n", name);
        return 0;
    }

    char content[13] = "hello,world\n";
    size_t n = fwrite(content, sizeof(char), sizeof(content), f);
    printf("输入了 %ld 个字符\n", n);

    f = freopen(name, "r", f);
    char result[13];
    n = fread(result, sizeof(char), sizeof(content), f);
    printf("读入了 %ld 个字符\n", n);
    puts(result);

    f = freopen(name, "w+", f);
    char ncontent[20] = "new hello, world\n";
    n = fwrite(content, sizeof(char), sizeof(ncontent), f);
    printf("输入了 %ld 个字符\n", n);

    char nresult[20];
    f = freopen(name, "r", f);
    fseek(f, 5, SEEK_SET);  // fseek 对当前读文件的游标做偏移
    n = fread(nresult, sizeof(char), 10, f);
    puts(nresult);

    fpos_t pos;
    int c = fgetpos(f, &pos);
    printf("%d, %lld\n", c, pos);

    fclose(f);
    return 0;
}
