#include <stdio.h>
// 1,fseek -- 根据文件指针的位置和偏移量来定位文件指针
// int fseek ( FILE * stream, long int offset, int origin );
// offset-单位字节，
/*
origin 三个参数：
SEEK_SET	Beginning of file（文件开始的位置）
SEEK_CUR	Current position of the file pointer（当前文件指针所指向的位置）
SEEK_END	End of file *（文件末尾）
*/

// 2,ftell -- 返回文件之争相对于起始位置的偏移量

// 3,rewind -- 让文件指针回到起始位置
int main(void)
{
    // 打开一个文件
    FILE *pf = fopen("text.md", "r");
    if (pf == NULL)
    {
        perror("fopen");
        return -1;
    }
    // 读文件
    char ch = fgetc(pf);
    printf("%c\n", ch); // p
    fseek(pf, -2, SEEK_END);
    ch = fgetc(pf);
    printf("%c\n", ch); // t
    int ret = ftell(pf);
    printf("%d\n", ret); // 11
    rewind(pf);
    // ch = fgetc(pf);
    // printf("%c\n", ch); // e
    ch = fgetc(pf);
    printf("%c\n", ch); // p

    // 关闭文件
    fclose(pf);
    pf = NULL;
    return 0;
}
