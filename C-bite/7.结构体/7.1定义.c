#include <stdio.h>

struct B
{
    int id;
    char c;
};
struct Stu
{
    char name[10];
    int age;
    float score;
    struct B b; // 结构体可以是另一个结构体的成员
} st1, st2;     // st1和st2是结构体变量
// st1和st2是全局变量
void print(struct Stu *t)
{
    printf("%s,%d,%.2f,%d,%c\n", t->name, t->age, t->score, t->b.id, t->b.c);
}
int main(void)
{
    // st是结构体变量，是局部变量
    struct Stu st;                                   // 对象
    struct Stu str = {"安安", 21, 98.5, 10011, 'M'}; // 初始化
    printf("%s,%d,%.2f,%d,%c\n", str.name, str.age, str.score, str.b.id, str.b.c);

    struct Stu *pstr = &str;
    printf("%s,%d,%.2f,%d,%c\n", (*pstr).name, (*pstr).age, (*pstr).score, (*pstr).b.id, (*pstr).b.c);
    printf("%s,%d,%.2f,%d,%c\n", pstr->name, pstr->age, pstr->score, pstr->b.id, pstr->b.c);

    print(&str); // 结构体传参的时候，要传结构体的地址，否则当结构体过大的时候，会导致系统开销变大，导致性能下降
    return 0;
}