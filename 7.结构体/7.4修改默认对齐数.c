#include <stdio.h>

// 默认对齐数 - 8

// 修改默认对齐数为2
#pragma pack(2)
struct Node1
{
    char a; // 0-1
    // 1-3
    int b;  // 4 8 4, 4-7
    char c; // 8-9
    // 9-11
};
#pragma pack() // 取小修改默认对齐数为2，恢复为8
// 此时只有结构体struct Node1的默认对齐数是2

// struct Node2
// {
//     char a;
//     char b;
//     int c;
// };

int main(void)
{
    printf("默认对齐数为8=%zd\n", sizeof(struct Node1)); // 12
    printf("默认对齐数为2=%zd\n", sizeof(struct Node1)); // 8
    return 0;
}
