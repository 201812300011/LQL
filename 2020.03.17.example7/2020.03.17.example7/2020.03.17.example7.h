
// 2020.03.17.example7.h : 2020.03.17.example7 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy20200317example7App:
// �йش����ʵ�֣������ 2020.03.17.example7.cpp
//

class CMy20200317example7App : public CWinApp
{
public:
	CMy20200317example7App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy20200317example7App theApp;
