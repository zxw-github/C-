// void* realloc (void* ptr, size_t size);
/*
ptr
Pointer to a memory block previously allocated with malloc, calloc or realloc.
Alternatively, this can be a null pointer, in which case a new block is allocated (as if malloc was called).
size
(指向之前用malloc、calloc或realloc分配的内存块。
或者，这可以是一个空指针，在这种情况下，会分配一个新的块（就像调用了malloc一样）。
)
New size for the memory block, in bytes.
size_t is an unsigned integral type.
(内存块的新大小，以字节为单位。
size_t是一个无符号积分类型。
)

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = (int *)malooc(10 * sizeof(int));

    int *ptr = (int *)recalloc(p, 20 * sizeof(int));
    if (ptr != NULL)
    {
        p = ptr;
    }
    return 0;
}

/*
reallco 开辟空间有3种情况
1，申请的空间后有足够的空间申请，则返回原来的空间的地址
2，申请的空间后没有足够的空间申请，且堆区有空间，则复制原来的数据到新的空间，返回新的空间的地址，原来的空间释放
3，当堆区没有足够的空间申请，则返回NULL
*/