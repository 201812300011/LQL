
// MFCexample7.h : MFCexample7 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCexample7App:
// �йش����ʵ�֣������ MFCexample7.cpp
//

class CMFCexample7App : public CWinApp
{
public:
	CMFCexample7App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCexample7App theApp;
