// Mdlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��13���ۺ�ʵ��3.h"
#include "Mdlg.h"
#include "afxdialogex.h"


// Mdlg �Ի���

IMPLEMENT_DYNAMIC(Mdlg, CDialogEx)

Mdlg::Mdlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Modify, pParent)
	, j(0)
{

}

Mdlg::~Mdlg()
{
}

void Mdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, j);
}


BEGIN_MESSAGE_MAP(Mdlg, CDialogEx)
END_MESSAGE_MAP()


// Mdlg ��Ϣ�������
