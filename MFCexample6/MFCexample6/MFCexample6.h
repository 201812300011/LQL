
// MFCexample6.h : MFCexample6 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCexample6App:
// �йش����ʵ�֣������ MFCexample6.cpp
//

class CMFCexample6App : public CWinApp
{
public:
	CMFCexample6App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCexample6App theApp;
