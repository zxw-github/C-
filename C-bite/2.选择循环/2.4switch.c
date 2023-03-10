#include <stdio.h>

// switch实现打印星期
void switch_day();
// switch实现工作日和休息日的打印
void work_rest();
int main(void)
{
    // switch_day();
    work_rest();
    return 0;
}
void switch_day()
{
    int day;
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("星期1\n");
        break;
    case 2:
        printf("星期2\n");
        break;
    case 3:
        printf("星期3\n");
        break;
    case 4:
        printf("星期4\n");
        break;
    case 5:
        printf("星期5\n");
        break;
    case 6:
        printf("星期6\n");
        break;
    case 7:
        printf("星期7\n");
        break;
    }
}
void work_rest()
{
    int day;
    scanf("%d", &day);
    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("工作日\n");
        break;
    case 6:
    case 7:
        printf("休息日\n");
        break;
    default:
        printf("输入错误\n");
        break;
    }
}