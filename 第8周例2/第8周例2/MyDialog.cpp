// MyDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��8����2.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// MyDialog �Ի���

IMPLEMENT_DYNAMIC(MyDialog, CDialogEx)

MyDialog::MyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyDialog::~MyDialog()
{
}

void MyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(MyDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDialog ��Ϣ�������


BOOL MyDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	s = "";//�ַ���s�����洢GetText(0, str); ��ȡ���ַ���

	Lbox.AddString(_T("�쳣: OCX ����ҳӦ���� FALSE"));
	Lbox.AddString(_T("TODO:  �ڴ���Ӷ���ĳ�ʼ��"));
	/*���öԻ������ķ������������Ŀ��ʾ���б����*/
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void MyDialog::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int n = Lbox.GetCurSel();
	Lbox.GetText(n,s);

}
