
// 第14周学生信息管理系统.h : 第14周学生信息管理系统 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C第14周学生信息管理系统App:
// 有关此类的实现，请参阅 第14周学生信息管理系统.cpp
//

class C第14周学生信息管理系统App : public CWinApp
{
public:
	C第14周学生信息管理系统App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C第14周学生信息管理系统App theApp;
