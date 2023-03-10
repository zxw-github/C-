#include <stdio.h>

struct Node
{
    int data;
    struct Node *next; // 结构体指针
};

typedef struct Node1
{
    int data;
    struct Node1 *next;
} Node1;

int main(void)
{
    struct Node N1 = {1, NULL};
    struct Node N2 = {2, &N1};
    printf("%d,%d\n", N2.data, N2.next->data);
    return 0;
}