
// MFCexample8.h : MFCexample8 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCexample8App:
// �йش����ʵ�֣������ MFCexample8.cpp
//

class CMFCexample8App : public CWinApp
{
public:
	CMFCexample8App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCexample8App theApp;
