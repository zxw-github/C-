#include <stdio.h>

int main(void)
{
    extern int g_val;
    printf("%d\n", g_val);

    return 0;
}
// vscode，默认单文件编译，
// 需手动使用gcc编译这两个文件
// gcc 1.11extern-1.c 1.12extern-2.c -o extern
// ./extern