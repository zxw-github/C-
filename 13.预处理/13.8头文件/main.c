#include <stdio.h>
#include "add.h"

//<>和""的本质区别是：查找策略的不同
//"" -- 1，在源文件所在的目录下寻找，2，如未找到则在库函数头文件的目录下查找
//<> -- 在库函数 头文件的目录下查找
int main(void)
{
    int a = 10;
    int b = 30;
    int ret = ADD(a, b);
    printf("%d\n", ret);

    return 0;
}