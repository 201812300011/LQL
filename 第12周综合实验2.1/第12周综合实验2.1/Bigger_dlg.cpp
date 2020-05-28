// Bigger_dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��12���ۺ�ʵ��2.1.h"
#include "Bigger_dlg.h"
#include "afxdialogex.h"
#include "MainFrm.h"//����ͷ�ļ�
#include "��12���ۺ�ʵ��2.1Doc.h"//
#include "��12���ۺ�ʵ��2.1View.h"//

// Bigger_dlg �Ի���

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


// Bigger_dlg ��Ϣ�������


void Bigger_dlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	CMainFrame* pFrame = (CMainFrame *)(AfxGetApp()->m_pMainWnd);
	C��12���ۺ�ʵ��21View* pView = (C��12���ۺ�ʵ��21View*)pFrame->GetActiveView();
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
