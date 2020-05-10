#pragma once
 
#ifdef W32D_EXPORTS
#define W32D_API _declspec(dllexport)//宏
#else
#define W32D_API _declspec(dllexport)
#endif

//此类是从W32D.dll导出的
class W32D_API CW32D {
public:
	CW32D(void);
	//TODO：在此添加您的方法。
};

extern W32D_API int nW32D;//常量

W32D_API int fnW32D(void);//函数

W32D_API int GetInt();//函数
