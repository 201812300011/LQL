
// ��6�ܿ�����ϰ1.h : ��6�ܿ�����ϰ1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��6�ܿ�����ϰ1App:
// �йش����ʵ�֣������ ��6�ܿ�����ϰ1.cpp
//

class C��6�ܿ�����ϰ1App : public CWinApp
{
public:
	C��6�ܿ�����ϰ1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��6�ܿ�����ϰ1App theApp;
