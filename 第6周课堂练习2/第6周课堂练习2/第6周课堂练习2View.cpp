
// ��6�ܿ�����ϰ2View.cpp : C��6�ܿ�����ϰ2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��6�ܿ�����ϰ2.h"
#endif

#include "��6�ܿ�����ϰ2Doc.h"
#include "��6�ܿ�����ϰ2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��6�ܿ�����ϰ2View

IMPLEMENT_DYNCREATE(C��6�ܿ�����ϰ2View, CView)

BEGIN_MESSAGE_MAP(C��6�ܿ�����ϰ2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C��6�ܿ�����ϰ2View::OnFileOpen)
END_MESSAGE_MAP()

// C��6�ܿ�����ϰ2View ����/����

C��6�ܿ�����ϰ2View::C��6�ܿ�����ϰ2View()
{
	// TODO: �ڴ˴���ӹ������

}

C��6�ܿ�����ϰ2View::~C��6�ܿ�����ϰ2View()
{
}

BOOL C��6�ܿ�����ϰ2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��6�ܿ�����ϰ2View ����

void C��6�ܿ�����ϰ2View::OnDraw(CDC* pDC)
{
	C��6�ܿ�����ϰ2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CClientDC dc(this);
	CRect rect;
	GetClientRect(&rect);
	if (r == IDOK)
	{
		CImage img;
		img.Load(filename);
		x = (rect.Width() - img.GetWidth()) / 2;
		y = (rect.Height() - img.GetHeight()) / 2;
		img.Draw(dc.m_hDC, x, y, img.GetWidth(), img.GetHeight());
	}
}


// C��6�ܿ�����ϰ2View ���

#ifdef _DEBUG
void C��6�ܿ�����ϰ2View::AssertValid() const
{
	CView::AssertValid();
}

void C��6�ܿ�����ϰ2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��6�ܿ�����ϰ2Doc* C��6�ܿ�����ϰ2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��6�ܿ�����ϰ2Doc)));
	return (C��6�ܿ�����ϰ2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��6�ܿ�����ϰ2View ��Ϣ�������


void C��6�ܿ�����ϰ2View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	r = cfd.DoModal();
	filename = cfd.GetPathName();
	GetDC()->TextOutW(0, 100, filename);
	Invalidate();
}
