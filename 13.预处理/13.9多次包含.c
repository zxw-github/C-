// 为了防止一个头文件被多次重复包含，导致预编译时代码重复
// 方法1：
#pragma once

// 方法2:
// 在头文件中做如下操作，此时如果重复包含同一个头文件，会在预编译时对多余的进行删除
#ifndef __ADD_H__
#define __ADD_H__
int ADD(int x, int y);
#endif

// 《C语言深度解刨》