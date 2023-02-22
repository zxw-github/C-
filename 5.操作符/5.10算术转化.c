// 隐式转换：整型提升，算数转换
/*
算术转换：如果个操作符的各个操作数属于不同的数据类型，那么就需要其中一个操作数转换为另一个操作数的类型，否则无法进行计算
*/
// long double > double >float > unsigned long int > long int > unsigned int > int(后面向前面转换)
#include <stdio.h>

int main(void)
{
    int a = 3;
    float f = 4.25f;
    printf("%f\n", a + f); // 此时+操作符两侧的操作数属于不同的类型，需要进行算术转换，将int型的a转换为float
    return 0;
}