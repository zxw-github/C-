#include <stdio.h>

// 位段饿成员必须是int,unsigned int,signed int.(char 型也可以)
//  结构体
struct S1
{
    int a;
    int b;
    int c;
};
// 位段
// 位段的空间以4个字节(int)或1个字节（char)的方式开辟
struct S2
{
    int a : 2; // a成员占2个bite位
    int b : 4; // b成员占4个bite位
    int c : 8; // c成员占8个bite位
};
int main(void)
{
    printf("%zd\n", sizeof(struct S2)); // 4，总共14个比特位，以4个字节开辟
    return 0;
}

// 位段可以用来节省空间，比如，性别就只需要两个bite位来存放即可，所以就可以 chae sex :2
// IP数据报的首部