
// MFC0303test3.h : MFC0303test3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC0303test3App:
// �йش����ʵ�֣������ MFC0303test3.cpp
//

class CMFC0303test3App : public CWinApp
{
public:
	CMFC0303test3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC0303test3App theApp;
