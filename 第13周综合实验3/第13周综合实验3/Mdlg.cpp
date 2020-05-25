// Mdlg.cpp : 实现文件
//

#include "stdafx.h"
#include "第13周综合实验3.h"
#include "Mdlg.h"
#include "afxdialogex.h"


// Mdlg 对话框

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


// Mdlg 消息处理程序
