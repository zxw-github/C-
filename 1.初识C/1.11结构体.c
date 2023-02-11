#include <stdio.h>

// 结构体可以让c语言创建新的类型

// 创建学生结构体类型
struct Stu
{
    char name[20];
    int age;
    double score;
};
// 创建书的结构体类型
struct Book
{
    char name[20];
    float price;
    char id[30];
};
int main(void)
{
    struct Stu s = {"小安", 20, 90.8};
    printf("1:%s %d %.2f\n", s.name, s.age, s.score);

    struct Stu *ps = &s;
    printf("2:%s %d %.2f\n", (*ps).name, (*ps).age, (*ps).score);

    printf("3:%s %d %.2f\n", ps->name, ps->age, ps->score);

    return 0;
}