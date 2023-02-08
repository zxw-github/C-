#include <stdio.h>
#define MAX 10 // 常量3: define定义的字符常量

int age = 19; // 全局变量
int main(void)
{
    // 局部变量
    int age = 20;       // 此时age为变量，并初始化为20
    float score = 98.4; // score为float型变量，并初始化
    char sex = 'M';     // sex为char型变量

    int num = 10;
    {
        printf("num=%d\n", num);
    }
    {
        int num2 = 20; // num2只在自己所在的{}内有效
    }
    // printf("num2=%d\n", num2);//此时num2无效

    // 常量1: 字面常量
    //  const -- 常属性
    //  常量2: const修饰的常变量
    const int a = 4;

    int arr[MAX] = {0};

    // 常量4: 枚举常量
    // 枚举关键字 -- enum
    enum sex
    {
        male,
        female,
        secret,
    };
    // male,female,secret -- 枚举常量
    enum sex s = male;
    enum sex t = female;
    printf("%d\n", male);   // 默认为0
    printf("%d\n", female); // 默认为1
    printf("%d\n", secret); // 默认为2
    printf("%d\n", t);      // t=1
    t = secret;
    printf("%d\n", t); // t=1
    // male = 5; 枚举常量不能被修改
    return 0;
}
/*
1，尽量少使用全局变量
2，当全局变量和局部变量的变量名相同时，使用就近原则，局部变量优先使用
3，局部变量是一个代码块{}内的部分
4，变量只在一个代码块（{}）的内部有效
*/
/*
1，由于旧标准规定，变量的定义必须放在代码块的最前面，否则编译失败
2，新的标准已经支持可在代码块内各处定义变量
3，为了代码的阅读性，建议将变量的定义放在代码块的前面
*/