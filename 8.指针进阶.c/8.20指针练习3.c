#include <stdio.h>

void test();
int main(void)
{

    test();
    return 0;
}
void test()
{
    int a[4] = {1, 2, 3, 4};
    int *ptr1 = (int *)(&a + 1);     //&a+1 - 跳过一个数组，地址是a[3]后面的地址，被强制转换成int类型的指针
    int *ptr2 = (int *)((int)a + 1); // a本来是数组首元素的地址，被强制转化成int类型，(int)a + 1-地址加了一个字节
                                     // 如a的值为0x10000001，(int)a + 1的值为0x10000002

    printf("%x,%x\n", ptr1[-1], *ptr2);
    // ptr1指向的是a[3]后面的地址a[4],ptr1[-1] - a[3]的地址
}