#include <stdio.h>

struct S
{
    char name[20];
    int age;
    float score;
};
void write()
{
    struct S s = {"postgraduate", 25, 380.0};
    // 打开文件
    FILE *pf = fopen("text.md", "w");
    if (pf == NULL)
    {
        perror("fopen");
        return;
    }
    // 写文件
    fwrite(&s, sizeof(struct S), 1, pf);
    //  关闭文件
    fclose(pf);
    pf = NULL;
}
void read()
{
    struct S s = {0};
    // 打开文件
    FILE *pf = fopen("text.md", "r");
    if (pf == NULL)
    {
        perror("fopen");
        return;
    }
    // 对格式化的数据进行读文件
    fread(&s, sizeof(struct S), 1, pf);
    printf("%s %d %f\n", s.name, s.age, s.score);

    // 关闭文件(二进制)
    fclose(pf);
    pf = NULL;
}
int main(void)
{
    // write();
    read();

    return 0;
}