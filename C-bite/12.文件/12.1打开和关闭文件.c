#include <stdio.h>

int main(void)
{
    // 打开文件
    FILE *pf = fopen("/Users/zhaoxiaowei/Documents/Git-code/c-language-learning/README.md", "r");
    if (pf == NULL)
    {
        perror("fopen");
        return -1;
    }

    // 关闭文件
    fclose(pf);
    pf = NULL;
    return 0;
}