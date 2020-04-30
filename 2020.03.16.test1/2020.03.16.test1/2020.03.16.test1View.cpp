
// 2020.03.16.test1View.cpp : CMy20200316test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.03.16.test1.h"
#endif

#include "2020.03.16.test1Doc.h"
#include "2020.03.16.test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316test1View

IMPLEMENT_DYNCREATE(CMy20200316test1View, CView)

BEGIN_MESSAGE_MAP(CMy20200316test1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy20200316test1View ����/����

CMy20200316test1View::CMy20200316test1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200316test1View::~CMy20200316test1View()
{
}

BOOL CMy20200316test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200316test1View ����

void CMy20200316test1View::OnDraw(CDC* pDC)
{
	CMy20200316test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->rect);
}


// CMy20200316test1View ���

#ifdef _DEBUG
void CMy20200316test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316test1Doc* CMy20200316test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316test1Doc)));
	return (CMy20200316test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316test1View ��Ϣ�������


void CMy20200316test1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMy20200316test1Doc* pDoc = GetDocument();
	SetCapture();
	pDoc->A = point.x; pDoc->B = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void CMy20200316test1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMy20200316test1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	ReleaseCapture();
	pDoc->C = point.x; pDoc->D = point.y;
	CRect rect(pDoc->A, pDoc->B, pDoc->C, pDoc->D);
	dc.Rectangle(&rect);

	CView::OnLButtonUp(nFlags, point);
}


void CMy20200316test1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy20200316test1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString t;
	t.Format(_T("X=%d,Y=%d"), point.x, point.y);
	dc.TextOutW(300, 300, t);

	CView::OnMouseMove(nFlags, point);
}
