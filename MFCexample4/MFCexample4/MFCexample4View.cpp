
// MFCexample4View.cpp : CMFCexample4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCexample4.h"
#endif

#include "MFCexample4Doc.h"
#include "MFCexample4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample4View

IMPLEMENT_DYNCREATE(CMFCexample4View, CView)

BEGIN_MESSAGE_MAP(CMFCexample4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexample4View ����/����

CMFCexample4View::CMFCexample4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCexample4View::~CMFCexample4View()
{
}

BOOL CMFCexample4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCexample4View ����

void CMFCexample4View::OnDraw(CDC* /*pDC*/)
{
	CMFCexample4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCexample4View ���

#ifdef _DEBUG
void CMFCexample4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample4Doc* CMFCexample4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample4Doc)));
	return (CMFCexample4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample4View ��Ϣ�������


void CMFCexample4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.MoveTo(0,(rc.bottom+rc.top)/2);
	dc.LineTo((rc.right+rc.left)/2,0);
	dc.LineTo(rc.right,(rc.bottom+rc.top)/2);
	dc.LineTo((rc.right+rc.left)/2,rc.bottom);
	dc.LineTo(0, (rc.bottom + rc.top) / 2);
	CView::OnLButtonDown(nFlags, point);
}
