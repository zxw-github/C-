#include <stdio.h>

// 密码输入练习
void password();
// 清理缓冲区
void clean_stdin();
int main(void)
{
    // password();
    clean_stdin();

    return 0;
}
void password()
{
    char password[10] = {0};
    printf("请输入密码:>");
    scanf("%s", password);
    // 在输入完密码后，缓冲区里有\n,在getchar读取时有\n,所以会直接确认失败
    fflush(stdin);
    printf("请确认密码(Y/N):>");
    char ch = getchar();
    if (ch == 'Y')
    {
        printf("确认成功\n");
    }
    else
    {
        printf("确认失败\n");
    }
}
// 清理缓冲区
void clean_stdin()
{
    char password[10] = {0};
    printf("请输入密码:>");
    scanf("%s", password);
    // 清理缓冲区内剩余的内容
    while (getchar() != '\n')
    {
        ;
    }

    printf("请确认密码(Y/N):>");
    char ch = getchar();
    if (ch == 'Y')
    {
        printf("确认成功\n");
    }
    else
    {
        printf("确认失败\n");
    }
}