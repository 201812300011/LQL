
// 2020.03.16.example2View.cpp : CMy20200316example2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.03.16.example2.h"
#endif

#include "2020.03.16.example2Doc.h"
#include "2020.03.16.example2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example2View

IMPLEMENT_DYNCREATE(CMy20200316example2View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example2View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy20200316example2View ����/����

CMy20200316example2View::CMy20200316example2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200316example2View::~CMy20200316example2View()
{
}

BOOL CMy20200316example2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200316example2View ����

void CMy20200316example2View::OnDraw(CDC* pDC)
{
	CMy20200316example2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

	CPoint point(30,30);
	pDC->MoveTo(point);
	pDC->LineTo(pDoc->m_point);
}


// CMy20200316example2View ���

#ifdef _DEBUG
void CMy20200316example2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example2Doc* CMy20200316example2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example2Doc)));
	return (CMy20200316example2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example2View ��Ϣ�������


void CMy20200316example2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMy20200316example2Doc* pDoc = GetDocument();
	pDoc->m_point = point;
	InvalidateRect(NULL,FALSE);

	CView::OnMouseMove(nFlags, point);
}
