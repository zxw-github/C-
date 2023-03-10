#include <stdio.h>
#include <string.h>

// offsetof
// 此具有函数形式的宏返回数据结构或联合类型中成员成员的偏移值（以字节为单位）。
// C 库宏 offsetof(type, member-designator) 会生成一个类型为 size_t 的整型常量，它是一个结构成员相对于结构开头的字节偏移量。成员是由 member-designator 给定的，结构的名称是在 type 中给定的。

#include <stdio.h>  /* printf */
#include <stddef.h> /* offsetof */

struct address
{
    char name[50];
    char street[50];
    int phone;
};

int main()
{
    printf("address 结构中的 name 偏移 = %zd 字节。\n", offsetof(struct address, name));

    printf("address 结构中的 street 偏移 = %zd 字节。\n", offsetof(struct address, street));

    printf("address 结构中的 phone 偏移 = %zd 字节。\n", offsetof(struct address, phone));

    return (0);
}

// 输出
/*
address 结构中的 name 偏移 = 0 字节。
address 结构中的 street 偏移 = 50 字节。
address 结构中的 phone 偏移 = 100 字节。
*/