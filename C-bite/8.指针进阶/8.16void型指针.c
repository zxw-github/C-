#include <stdio.h>

int main(void)
{
    void *p; // p为void类型的指针，可以指向任意类型的指针
    int a = 10;
    char c = 'W';

    // p = &a; // 正确
    p = &c; // 正确
    // 但不可以进行解引用操作，以及偏移操作
    // *p=2;    //error,因为p为void类型的指针，解引用操作时无法知道需要访问几个字节的空间
    // p++; //error，同样偏移操作也不能实现，

    // 如果需要对void类型的指针进行操作，需要根据需要进行强制类型转换
    *(int *)p = 2; // 正确，
    printf("%d\n", a);

    *(char *)p = 'm';
    printf("%c\n", c);

    return 0;
}