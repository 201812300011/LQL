
// MFC0303test1.h : MFC0303test1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC0303test1App:
// �йش����ʵ�֣������ MFC0303test1.cpp
//

class CMFC0303test1App : public CWinApp
{
public:
	CMFC0303test1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC0303test1App theApp;
