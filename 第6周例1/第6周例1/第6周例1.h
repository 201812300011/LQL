
// ��6����1.h : ��6����1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��6����1App:
// �йش����ʵ�֣������ ��6����1.cpp
//

class C��6����1App : public CWinApp
{
public:
	C��6����1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��6����1App theApp;
