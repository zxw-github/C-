#include <stdio.h>

void test();
void test_1();
void test_2();
void print_1(int arr[3][4], int r, int c);
void print_2(int (*p)[4], int r, int c); // p是一个数组指针
int main(void)
{
    // test_1();
    // test_2();
    int arr[3][4] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {7, 8, 9, 0}};
    // print_1(arr, 3, 4);
    print_2(arr, 3, 4); // 二维数组的首地址是第一行的地址
    return 0;
}
void test()
{
    int arr[10] = {0};
    // arr是数组首元素的地址--arr[0]的地址
    int(*pa)[10] = &arr; // pa就是一个数组指针 -- 存放的是数组的地址

    double *b[5];
    double *(*pb)[5] = &b;
}
void test_1()
{
    int arr[10] = {0};

    int *p1 = arr;
    int(*p2)[10] = &arr; // 数组指针

    printf("%p\n", arr);
    printf("%p\n", &arr);
    printf("%p\n", arr + 1);  // 偏移一个数组元素的大小
    printf("%p\n", &arr + 1); // 偏移一个数组的大小

    printf("%p\n", p1);
    printf("%p\n", p2);
    printf("%p\n", p1 + 1); // 偏移一个数组元素的大小
    printf("%p\n", p2 + 1); // 偏移一个数组的大小
}
void test_2()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int(*pa)[10] = &a;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *((*pa) + i)); //*pa解引用得到数组首元素的地址，
    }
    putchar('\n');
}
void print_1(int arr[3][4], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void print_2(int (*p)[4], int r, int c) // int (*p)[4]--一维数组的指针
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(*(p + i) + j)); //(p + i)得到第i行的首地址，(*(p + i) + j)得到第i行的第j个元素的地址
        }
        printf("\n");
    }
}

int (*pa[10])[5]; // pa是一个存放数组指针的数组，该数组可以存放10个数组指针，每个数组指着可以指向一个数组，数组5个元素