#include <stdio.h>

void test()
{
    printf("%s\n", __FILE__);     // 打印编译的源文件
    printf("%d\n", __LINE__);     // 打印所在行号
    printf("%s\n", __DATE__);     // 打印日期
    printf("%s\n", __TIME__);     // 打印时间
    printf("%s\n", __FUNCTION__); // 打印所在函数名
}
void test2()
{
    // 打开文件
    FILE *pf = fopen("log.md", "a+");
    if (pf == NULL)
    {
        perror("log");
        return;
    }
    // 追加写入文件
    for (int i = 0; i < 5; i++)
    {
        fprintf(pf, "%s %d %s %s %s\n", __FILE__, __LINE__, __DATE__, __TIME__, __FUNCTION__);
    }
    // 关闭文件
    fclose(pf);
    pf = NULL;
}
void test3()
{
    printf("%d\n", __STDC__); // 打印1，表示遵循ANSI C标准，否则未定义
}
int main(void)
{
    // test2();
    test3();
    return 0;
}