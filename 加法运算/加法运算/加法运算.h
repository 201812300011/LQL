
// �ӷ�����.h : �ӷ����� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�ӷ�����App:
// �йش����ʵ�֣������ �ӷ�����.cpp
//

class C�ӷ�����App : public CWinApp
{
public:
	C�ӷ�����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�ӷ�����App theApp;
