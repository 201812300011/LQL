// mydialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��7�ܿ�����ϰ2.h"
#include "mydialog.h"
#include "afxdialogex.h"


// mydialog �Ի���

IMPLEMENT_DYNAMIC(mydialog, CDialogEx)

mydialog::mydialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s1(_T(""))
	, s2(_T(""))
{

}

mydialog::~mydialog()
{
}

void mydialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s1);
	DDX_Text(pDX, IDC_EDIT2, s2);
}


BEGIN_MESSAGE_MAP(mydialog, CDialogEx)
END_MESSAGE_MAP()


// mydialog ��Ϣ�������
