// W32D.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "W32D.h"

// 这是导出变量的一个示例
W32D_API int nW32D = 0;

// 这是导出函数的一个示例。
W32D_API int fnW32D(void)
{
	return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 W32D.h
CW32D::CW32D()
{
	return ;
}

int factorial(int n)
{
	if (n < 0 || n>12) return 0;
	int sum = 1;
	for (int i = 1; i <= n; i++)
		sum = sum*i;
	return sum;
}


float W32D_API FAC::convert(float deg) {
	return deg / (float)r;
}
