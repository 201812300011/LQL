
// ��8��ʵ��2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C��8��ʵ��2App: 
// �йش����ʵ�֣������ ��8��ʵ��2.cpp
//

class C��8��ʵ��2App : public CWinApp
{
public:
	C��8��ʵ��2App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C��8��ʵ��2App theApp;