#include <stdio.h>

void test1();
int main(void)
{
    test1();
    return 0;
}
void test1()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = (int *)(&a + 1); //&a - 取出整个数组的地址，&a+1 - 偏移一个数组的大小，
    // 强制转换成（int*），ptr指向a[4]后面的地址，并且是int类型的指针
    printf("%d,%d\n", *(a + 1), *(ptr - 1)); // 2,  5
    // a表示首元素的地址，a+1第二个元素的地址，*(a + 1) - 第二个元素，ptr是int类型的指针，ptr-1指向a[4]的地址
}