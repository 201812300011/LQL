// MyDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��8��ʵ��3.2.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// MyDialog �Ի���

IMPLEMENT_DYNAMIC(MyDialog, CDialogEx)

MyDialog::MyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, left(0)
	, top(0)
	, right(0)
	, buttom(0)
{

}

MyDialog::~MyDialog()
{
}

void MyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, left);
	DDX_Text(pDX, IDC_EDIT2, top);
	DDX_Text(pDX, IDC_EDIT3, right);
	DDX_Text(pDX, IDC_EDIT4, buttom);
}


BEGIN_MESSAGE_MAP(MyDialog, CDialogEx)
END_MESSAGE_MAP()


// MyDialog ��Ϣ�������
