
// ��8��ʵ��3.3.h : ��8��ʵ��3.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��8��ʵ��33App:
// �йش����ʵ�֣������ ��8��ʵ��3.3.cpp
//

class C��8��ʵ��33App : public CWinApp
{
public:
	C��8��ʵ��33App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��8��ʵ��33App theApp;
