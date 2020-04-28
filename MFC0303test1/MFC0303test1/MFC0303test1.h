
// MFC0303test1.h : MFC0303test1 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC0303test1App:
// 有关此类的实现，请参阅 MFC0303test1.cpp
//

class CMFC0303test1App : public CWinApp
{
public:
	CMFC0303test1App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC0303test1App theApp;
