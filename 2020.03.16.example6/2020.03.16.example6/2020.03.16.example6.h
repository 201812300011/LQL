
// 2020.03.16.example6.h : 2020.03.16.example6 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy20200316example6App:
// �йش����ʵ�֣������ 2020.03.16.example6.cpp
//

class CMy20200316example6App : public CWinApp
{
public:
	CMy20200316example6App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy20200316example6App theApp;
