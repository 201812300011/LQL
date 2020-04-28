
// MFC2020.03.10.test3.h : MFC2020.03.10.test3 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC20200310test3App:
// 有关此类的实现，请参阅 MFC2020.03.10.test3.cpp
//

class CMFC20200310test3App : public CWinApp
{
public:
	CMFC20200310test3App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC20200310test3App theApp;
