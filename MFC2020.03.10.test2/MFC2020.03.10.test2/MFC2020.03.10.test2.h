
// MFC2020.03.10.test2.h : MFC2020.03.10.test2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC20200310test2App:
// �йش����ʵ�֣������ MFC2020.03.10.test2.cpp
//

class CMFC20200310test2App : public CWinApp
{
public:
	CMFC20200310test2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC20200310test2App theApp;
