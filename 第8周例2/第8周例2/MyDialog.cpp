// MyDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "第8周例2.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// MyDialog 对话框

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


// MyDialog 消息处理程序


BOOL MyDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	s = "";//字符串s用来存储GetText(0, str); 获取的字符串

	Lbox.AddString(_T("异常: OCX 属性页应返回 FALSE"));
	Lbox.AddString(_T("TODO:  在此添加额外的初始化"));
	/*调用对话框对象的方法，将多个项目显示在列表框中*/
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void MyDialog::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	int n = Lbox.GetCurSel();
	Lbox.GetText(n,s);

}
