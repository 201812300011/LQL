
// ��14��ѧ����Ϣ����ϵͳ.h : ��14��ѧ����Ϣ����ϵͳ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��14��ѧ����Ϣ����ϵͳApp:
// �йش����ʵ�֣������ ��14��ѧ����Ϣ����ϵͳ.cpp
//

class C��14��ѧ����Ϣ����ϵͳApp : public CWinApp
{
public:
	C��14��ѧ����Ϣ����ϵͳApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��14��ѧ����Ϣ����ϵͳApp theApp;
