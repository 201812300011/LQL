
// 2020.03.17.test2.h : 2020.03.17.test2 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMy20200317test2App:
// 有关此类的实现，请参阅 2020.03.17.test2.cpp
//

class CMy20200317test2App : public CWinApp
{
public:
	CMy20200317test2App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy20200317test2App theApp;
