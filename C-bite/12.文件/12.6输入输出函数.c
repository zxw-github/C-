#include <stdio.h>
/*
scanf() --  针对标准输入的格式化的输入语句 -- stdin
fscanf()  -- 针对所有输入刘鹗的格式化的输入语句
sscanf() -- 从一个字符串中，读取一个格式化的数据

printf() --针对标准输入的格式化的输入语句 -- stdin
fprintf() -- 针对所有输入刘鹗的格式化的输入语句
sprintf() -- 把一个格式化的数据，转化成字符串
*/

struct S
{
    char name[20];
    int age;
    float score;
};
int main(void)
{
    struct S s = {"postgraduate", 25, 380.0};
    char buff[100];
    // 把一个格式化的数据，转化成字符串
    sprintf(buff, "%s %d %f", s.name, s.age, s.score);
    printf("%s\n", buff);

    // 从一个字符串中，读取一个格式化的数据
    struct S temp = {0};
    sscanf(buff, "%s %d %f", temp.name, &(temp.age), &(temp.score));
    printf("%s %d %f\n", temp.name, temp.age, temp.score);

    return 0;
}
