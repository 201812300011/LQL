
// 2020.03.17.test2View.cpp : CMy20200317test2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.03.17.test2.h"
#endif

#include "2020.03.17.test2Doc.h"
#include "2020.03.17.test2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200317test2View

IMPLEMENT_DYNCREATE(CMy20200317test2View, CView)

BEGIN_MESSAGE_MAP(CMy20200317test2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy20200317test2View ����/����

CMy20200317test2View::CMy20200317test2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200317test2View::~CMy20200317test2View()
{
}

BOOL CMy20200317test2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200317test2View ����

void CMy20200317test2View::OnDraw(CDC* /*pDC*/)
{
	CMy20200317test2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy20200317test2View ���

#ifdef _DEBUG
void CMy20200317test2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200317test2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200317test2Doc* CMy20200317test2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200317test2Doc)));
	return (CMy20200317test2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200317test2View ��Ϣ�������


void CMy20200317test2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMy20200317test2Doc* pDoc = GetDocument();
	pDoc->A = point.x;

	CView::OnLButtonDown(nFlags, point);
}


void CMy20200317test2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMy20200317test2Doc* pDoc = GetDocument();
	pDoc->B = point.x;

	CView::OnLButtonUp(nFlags, point);
}


void CMy20200317test2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMy20200317test2Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	int a = abs(pDoc->A-pDoc->B);
	if(nFlags)
	{
		pDoc->count = pDoc->count++;
	}
	s.Format(_T("MouseMove������%d�Σ������ƶ�%d�����㷢��һ��"), pDoc->count, a);
	dc.TextOutW(300,300,s);

	CView::OnMouseMove(nFlags, point);
}
