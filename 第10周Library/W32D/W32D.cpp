// W32D.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "W32D.h"

//这是导出变量的一个实列
W32D_API  int nW32D = 0;

//这是导出函数的一个实列
W32D_API  int fnW32D(void)
{
	return 42;
}

W32D_API int GetInt()
{
	return 2020;
}
  

//这是已导出类的构造函数。
//有关类定义的消息，请参阅W32D.h
