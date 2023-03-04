#include <stdio.h>

#define SQURE(x) x *x       // 宏的参数会直接替换
#define DOUBLE(x) (x) + (x) // 为了避免歧义
#define DOU(x) ((x) + (x))  // 给宏带上()
// 宏可以嵌套使用，但不能递归
int main()
{
    printf("%d\n", SQURE(3));       // 3*3=9
    printf("%d\n", SQURE(3 + 1));   // 3+1*3+1 =7
    printf("%d\n", SQURE((3 + 1))); //(3+1)*(3+1)=16
    printf("%d\n", 10 * DOUBLE(4)); // 10*(4)+(4)=44
    return 0;
}