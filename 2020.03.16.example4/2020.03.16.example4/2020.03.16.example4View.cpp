
// 2020.03.16.example4View.cpp : CMy20200316example4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.03.16.example4.h"
#endif

#include "2020.03.16.example4Doc.h"
#include "2020.03.16.example4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example4View

IMPLEMENT_DYNCREATE(CMy20200316example4View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example4View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy20200316example4View ����/����

CMy20200316example4View::CMy20200316example4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200316example4View::~CMy20200316example4View()
{
}

BOOL CMy20200316example4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200316example4View ����

void CMy20200316example4View::OnDraw(CDC* /*pDC*/)
{
	CMy20200316example4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy20200316example4View ���

#ifdef _DEBUG
void CMy20200316example4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example4Doc* CMy20200316example4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example4Doc)));
	return (CMy20200316example4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example4View ��Ϣ�������


void CMy20200316example4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	SetCapture();//���������Ϣ

	CView::OnLButtonDown(nFlags, point);
}


void CMy20200316example4View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	ReleaseCapture();//�ͷ������Ϣ

	CView::OnLButtonUp(nFlags, point);
}


void CMy20200316example4View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);
	CString s;
	s.Format(_T("X=%d,Y=%d"),point.x,point.y);
	dc.TextOutW(200,200,s);

	CView::OnMouseMove(nFlags, point);
}
