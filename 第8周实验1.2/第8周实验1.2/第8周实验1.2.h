
// ��8��ʵ��1.2.h : ��8��ʵ��1.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��8��ʵ��12App:
// �йش����ʵ�֣������ ��8��ʵ��1.2.cpp
//

class C��8��ʵ��12App : public CWinApp
{
public:
	C��8��ʵ��12App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��8��ʵ��12App theApp;
