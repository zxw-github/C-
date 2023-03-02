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
    // 写文件-以行写
    fputs("hello world\n", pf);
    fputs("postgraduate\n", pf);

    // 关闭文件
    fclose(pf);
    pf = NULL;
}

void read()
{
    char arr[10] = {0};
    // 打开文件
    FILE *pf = fopen("text.md", "r"); // w -- 以读的方式打开文件，如果文件没有，会自动创建，如果文件不为空，则会销毁其内容
    if (pf == NULL)
    {
        perror("fopen");
        return;
    }
    // 写文件-以行写
    fgets(arr, 5, pf); // 只会读4个字符，末尾需要放\0，占一个位置
    printf("%s\n", arr);
    // 关闭文件
    fclose(pf);
    pf = NULL;
}
int main(void)
{
    // write();
    read();

    return 0;
}