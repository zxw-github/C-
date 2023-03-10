#include <stdio.h>

void write()
{
    // 打开文件
    FILE *pf = fopen("text.md", "w"); // w -- 以读的方式打开文件，如果文件没有，会自动创建，如果文件不为空，则会销毁其内容
    if (pf == NULL)
    {
        perror("fopen");
        return;
    }
    // 写文件
    fputc('h', pf);
    fputc('e', pf);
    fputc('l', pf);
    fputc('l', pf);
    fputc('0', pf);
    // 关闭文件
    fclose(pf);
    pf = NULL;
}
void std_stdout()
{
    fputc('a', stdout);
    fputc('b', stdout);
    fputc('c', stdout);
}
void read()
{
    // 打开文件
    FILE *pf = fopen("text.md", "r"); // w -- 以读的方式打开文件，如果文件没有，会自动创建，如果文件不为空，则会销毁其内容
    if (pf == NULL)
    {
        perror("fopen");
        return;
    }
    // 读文件
    int ret = fgetc(pf);
    printf("%c\n", ret);
    ret = fgetc(pf);
    printf("%c\n", ret);
    ret = fgetc(pf);
    printf("%c\n", ret);

    // 关闭文件
    fclose(pf);
    pf = NULL;
}
void std_stdin()
{
    int ret = fgetc(stdin);
    printf("%c\n", ret);
}
int main(void)
{
    // write();
    // std_stdout();
    // read();
    std_stdin();
    return 0;
}

// 注意流的概念