
// MFCexample5View.cpp : CMFCexample5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCexample5.h"
#endif

#include "MFCexample5Doc.h"
#include "MFCexample5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample5View

IMPLEMENT_DYNCREATE(CMFCexample5View, CView)

BEGIN_MESSAGE_MAP(CMFCexample5View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexample5View ����/����

CMFCexample5View::CMFCexample5View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCexample5View::~CMFCexample5View()
{
}

BOOL CMFCexample5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCexample5View ����

void CMFCexample5View::OnDraw(CDC* /*pDC*/)
{
	CMFCexample5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCexample5View ���

#ifdef _DEBUG
void CMFCexample5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample5Doc* CMFCexample5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample5Doc)));
	return (CMFCexample5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample5View ��Ϣ�������


void CMFCexample5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	s.Format(_T("���λ���ǣ�%d,%d��"),point.x,point.y);
	CClientDC dc(this);
	dc.TextOutW(100,200,s);
	CView::OnLButtonDown(nFlags, point);
}
