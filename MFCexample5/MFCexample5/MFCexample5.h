
// MFCexample5.h : MFCexample5 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCexample5App:
// �йش����ʵ�֣������ MFCexample5.cpp
//

class CMFCexample5App : public CWinApp
{
public:
	CMFCexample5App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCexample5App theApp;
