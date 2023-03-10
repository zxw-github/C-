#include <stdio.h>

#define DATA 10
void test1()
{
    /*
    #if 常量表达式  //常量表达式为真则编译下面的语句，否则就不对其进行编译
    语句；
    #endif
    */
#if 1
    printf("haha\n"); // 进行编译
#endif

#if 0 
printf("hehe\n");   //不进行编译，预处理时直接删除
#endif

#if DATA
    printf("xixi\n");
#endif
}
void test2()
{
// 多分支形式
#if 1 == 1
    printf("haha\n");
#elif 1 == 2
    printf("hehe\n");
#else
    printf("xixi\n");
#endif
}
void test3()
{
// 判断是否被定义
// 如果DATA被定义，则进行编译
#ifdef DATA
    printf("DATA1\n");
#endif

#if defined(DATA)
    printf("DATA2\n");
#endif

// 如果DATA未被定义，则进行编译
#ifndef DATA
    printf("DATA3\n");
#endif

#if !defined(DATA)
    printf("DATA4\n");
#endif
}
int main(void)
{
    // test1();
    // test2();
    test3();
    return 0;
}