
// ��5��ʵ��5.h : ��5��ʵ��5 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��5��ʵ��5App:
// �йش����ʵ�֣������ ��5��ʵ��5.cpp
//

class C��5��ʵ��5App : public CWinApp
{
public:
	C��5��ʵ��5App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��5��ʵ��5App theApp;
