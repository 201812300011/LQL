
// 2020.03.17test3.h : 2020.03.17test3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy20200317test3App:
// �йش����ʵ�֣������ 2020.03.17test3.cpp
//

class CMy20200317test3App : public CWinApp
{
public:
	CMy20200317test3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy20200317test3App theApp;
