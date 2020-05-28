// Bigger_dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "第12周综合实验2.1.h"
#include "Bigger_dlg.h"
#include "afxdialogex.h"
#include "MainFrm.h"//新添头文件
#include "第12周综合实验2.1Doc.h"//
#include "第12周综合实验2.1View.h"//

// Bigger_dlg 对话框

IMPLEMENT_DYNAMIC(Bigger_dlg, CDialogEx)

Bigger_dlg::Bigger_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Bigger, pParent)
{

}

Bigger_dlg::~Bigger_dlg()
{
}

void Bigger_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Bigger_dlg, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Bigger_dlg 消息处理程序


void Bigger_dlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
	CMainFrame* pFrame = (CMainFrame *)(AfxGetApp()->m_pMainWnd);
	C第12周综合实验21View* pView = (C第12周综合实验21View*)pFrame->GetActiveView();
	CImage img;
	img.Load(pView->filename);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	//InvalidateRect(rect);
	ReleaseDC(pDC);
}
