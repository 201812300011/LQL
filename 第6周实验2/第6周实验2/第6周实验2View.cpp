
// ��6��ʵ��2View.cpp : C��6��ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��6��ʵ��2.h"
#endif

#include "��6��ʵ��2Doc.h"
#include "��6��ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��6��ʵ��2View

IMPLEMENT_DYNCREATE(C��6��ʵ��2View, CView)

BEGIN_MESSAGE_MAP(C��6��ʵ��2View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��6��ʵ��2View ����/����

C��6��ʵ��2View::C��6��ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

C��6��ʵ��2View::~C��6��ʵ��2View()
{
}

BOOL C��6��ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��6��ʵ��2View ����

void C��6��ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	C��6��ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��6��ʵ��2View ���

#ifdef _DEBUG
void C��6��ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void C��6��ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��6��ʵ��2Doc* C��6��ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��6��ʵ��2Doc)));
	return (C��6��ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��6��ʵ��2View ��Ϣ�������


void C��6��ʵ��2View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	s = s + (char)nChar;
	dc.TextOutW(cpoint.x,cpoint.y,s);
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void C��6��ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCaretPos(point);
	s.Empty();
	cpoint = point;
	CView::OnLButtonDown(nFlags, point);
}
